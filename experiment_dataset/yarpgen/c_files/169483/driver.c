#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1831827657U;
unsigned int var_2 = 2605783135U;
long long int var_4 = -8620411389743860616LL;
unsigned char var_5 = (unsigned char)175;
long long int var_8 = -6221131152513530319LL;
int zero = 0;
long long int var_10 = -3081409772820601528LL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
