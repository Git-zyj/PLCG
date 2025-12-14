#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3227351900U;
unsigned short var_4 = (unsigned short)27300;
long long int var_8 = -2200419342575262618LL;
unsigned int var_11 = 3543576440U;
_Bool var_13 = (_Bool)0;
long long int var_14 = -3297806149882178879LL;
int zero = 0;
unsigned int var_17 = 2466755215U;
unsigned long long int var_18 = 6838144567141937936ULL;
void init() {
}

void checksum() {
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
