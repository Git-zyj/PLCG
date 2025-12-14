#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 914504385U;
long long int var_1 = -1556899889959181837LL;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2514755541U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)7126;
long long int var_7 = 7483870604247480100LL;
int var_8 = -1485911570;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)-125;
_Bool var_11 = (_Bool)0;
long long int var_12 = 6985308471430380021LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
