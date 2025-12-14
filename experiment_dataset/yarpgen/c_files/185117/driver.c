#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_10 = 6528503254575391780ULL;
long long int var_13 = -2111584522818655411LL;
int zero = 0;
long long int var_20 = -6030001245214962803LL;
unsigned long long int var_21 = 7776449623081977172ULL;
int var_22 = 2118641143;
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
