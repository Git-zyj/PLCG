#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2270334608U;
unsigned char var_2 = (unsigned char)7;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2921083466U;
unsigned short var_8 = (unsigned short)27803;
signed char var_11 = (signed char)84;
signed char var_12 = (signed char)40;
int zero = 0;
unsigned char var_13 = (unsigned char)104;
unsigned long long int var_14 = 16232417775490831368ULL;
unsigned int var_15 = 1434643934U;
signed char var_16 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
