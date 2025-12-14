#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 769778410724320869LL;
short var_1 = (short)-32171;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1900590116U;
int var_6 = 1316546720;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3271795795U;
int zero = 0;
unsigned short var_10 = (unsigned short)29927;
unsigned short var_11 = (unsigned short)1453;
short var_12 = (short)-10727;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4065016202U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
