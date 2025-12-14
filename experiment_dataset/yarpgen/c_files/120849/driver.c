#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3948;
unsigned long long int var_5 = 1043662800459262119ULL;
unsigned char var_12 = (unsigned char)143;
int zero = 0;
long long int var_18 = 3685369942742516881LL;
unsigned char var_19 = (unsigned char)148;
short var_20 = (short)-16925;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
