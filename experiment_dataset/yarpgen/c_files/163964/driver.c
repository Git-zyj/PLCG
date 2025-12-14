#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4885;
int var_7 = -360495676;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 2845876906U;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = 540620075737428855LL;
int var_17 = -1182380054;
void init() {
}

void checksum() {
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
