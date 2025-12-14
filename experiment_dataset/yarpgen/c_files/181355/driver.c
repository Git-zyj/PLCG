#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6333170076828531677LL;
long long int var_10 = -6153894248535537666LL;
unsigned short var_11 = (unsigned short)15499;
unsigned short var_13 = (unsigned short)43064;
unsigned char var_14 = (unsigned char)88;
int zero = 0;
int var_18 = -901704059;
unsigned long long int var_19 = 17423675137484591686ULL;
signed char var_20 = (signed char)-74;
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
