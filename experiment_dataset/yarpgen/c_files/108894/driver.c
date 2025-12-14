#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2362757907U;
unsigned long long int var_3 = 1995647214603514598ULL;
long long int var_4 = -5129388909734039955LL;
unsigned long long int var_5 = 7073927698063267462ULL;
signed char var_8 = (signed char)-53;
unsigned char var_9 = (unsigned char)19;
int zero = 0;
unsigned long long int var_10 = 13930696054615876452ULL;
_Bool var_11 = (_Bool)1;
int var_12 = -236113824;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
