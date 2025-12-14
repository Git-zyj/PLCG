#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned long long int var_2 = 8069880495030777725ULL;
unsigned int var_5 = 1419914093U;
unsigned long long int var_6 = 18204048172446376441ULL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)10991;
short var_10 = (short)5269;
signed char var_14 = (signed char)28;
int zero = 0;
unsigned int var_15 = 4253428186U;
unsigned char var_16 = (unsigned char)96;
unsigned int var_17 = 334608180U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
