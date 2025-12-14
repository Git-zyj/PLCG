#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9213706831034162940LL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-4369;
int zero = 0;
long long int var_12 = 3920717312958891993LL;
long long int var_13 = 7259420430899765876LL;
void init() {
}

void checksum() {
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
