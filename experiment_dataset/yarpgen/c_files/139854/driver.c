#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9435015941933465628ULL;
unsigned long long int var_3 = 11627929023897255388ULL;
short var_4 = (short)8865;
unsigned int var_5 = 2843399272U;
long long int var_6 = 6892674013653850622LL;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)9433;
int var_15 = -1531635288;
int zero = 0;
int var_20 = -1279108866;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4772333621042374593ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
