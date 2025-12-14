#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 580342714U;
long long int var_3 = -6223305862179632546LL;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)72;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 4814445813635776082ULL;
unsigned char var_10 = (unsigned char)54;
unsigned short var_11 = (unsigned short)8971;
unsigned short var_13 = (unsigned short)51047;
int zero = 0;
short var_14 = (short)-5334;
unsigned long long int var_15 = 772873925648617423ULL;
unsigned char var_16 = (unsigned char)119;
unsigned int var_17 = 1455545900U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
