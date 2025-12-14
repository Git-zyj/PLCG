#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 773590761217076753ULL;
unsigned long long int var_4 = 9706634586366525087ULL;
unsigned char var_6 = (unsigned char)33;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)73;
unsigned long long int var_13 = 17992000608732159856ULL;
signed char var_14 = (signed char)-118;
signed char var_15 = (signed char)-106;
unsigned short var_18 = (unsigned short)7627;
int zero = 0;
unsigned long long int var_20 = 14355275438257691952ULL;
int var_21 = 1651472104;
unsigned int var_22 = 2211349246U;
unsigned long long int var_23 = 11569198429963273084ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
