#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9164561368054850851LL;
short var_2 = (short)-29483;
unsigned int var_3 = 1772347821U;
unsigned long long int var_7 = 15771748032116870758ULL;
unsigned int var_9 = 1958317151U;
int zero = 0;
unsigned long long int var_13 = 16712318709153550898ULL;
short var_14 = (short)-13693;
void init() {
}

void checksum() {
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
