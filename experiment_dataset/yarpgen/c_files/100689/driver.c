#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9763947223024360357ULL;
unsigned short var_2 = (unsigned short)63558;
short var_6 = (short)-946;
signed char var_7 = (signed char)-28;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1385474173U;
long long int var_16 = -8881665871457834537LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)42;
short var_19 = (short)4919;
long long int var_20 = -2646535442238320900LL;
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
