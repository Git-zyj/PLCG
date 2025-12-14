#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3348056733U;
long long int var_1 = -2254210723080741393LL;
unsigned int var_3 = 2875791028U;
unsigned int var_8 = 3784664617U;
long long int var_9 = -5553344131104066842LL;
unsigned int var_12 = 1231765930U;
unsigned int var_13 = 508954548U;
long long int var_16 = -3302503243280537204LL;
unsigned int var_18 = 3871592053U;
long long int var_19 = -5659428981986870836LL;
int zero = 0;
unsigned int var_20 = 3853529657U;
long long int var_21 = -5570278891402520133LL;
unsigned int var_22 = 1660938485U;
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
