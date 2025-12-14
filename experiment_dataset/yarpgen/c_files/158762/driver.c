#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 516296456U;
long long int var_1 = -5681742531833792379LL;
short var_2 = (short)-4272;
_Bool var_3 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = 406511070;
unsigned int var_9 = 3588251582U;
int zero = 0;
int var_10 = -1654693492;
short var_11 = (short)-18574;
short var_12 = (short)-9729;
int var_13 = 2088575895;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
