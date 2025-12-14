#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11491712850316502433ULL;
unsigned short var_5 = (unsigned short)8956;
unsigned long long int var_9 = 7600640101842676126ULL;
unsigned char var_10 = (unsigned char)228;
short var_13 = (short)20786;
int zero = 0;
short var_18 = (short)-12029;
long long int var_19 = 7345850977491081440LL;
short var_20 = (short)7084;
unsigned char var_21 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
