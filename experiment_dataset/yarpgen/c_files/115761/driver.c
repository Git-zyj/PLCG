#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
int var_3 = 1687897410;
unsigned int var_4 = 3738984898U;
signed char var_7 = (signed char)-5;
int var_8 = -1338324930;
int var_9 = -2086418551;
unsigned int var_10 = 3108751995U;
unsigned long long int var_12 = 5584103390858637771ULL;
unsigned long long int var_13 = 2966161162466649196ULL;
signed char var_14 = (signed char)87;
short var_15 = (short)-32437;
int zero = 0;
unsigned int var_16 = 764942802U;
unsigned int var_17 = 1832509616U;
short var_18 = (short)22371;
int var_19 = -1756604671;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
