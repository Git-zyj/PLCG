#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 289210223U;
_Bool var_6 = (_Bool)1;
int var_9 = -1217053990;
int var_10 = -1556531819;
_Bool var_14 = (_Bool)1;
int var_19 = 1328441266;
int zero = 0;
long long int var_20 = 421306930003458293LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
