#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
int var_2 = 1632623667;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_10 = 86737331U;
unsigned short var_12 = (unsigned short)14816;
long long int var_16 = 1438187571680294470LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8844912275784399572ULL;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8094221781192193093LL;
unsigned int var_21 = 2196675705U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
