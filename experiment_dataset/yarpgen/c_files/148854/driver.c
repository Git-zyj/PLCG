#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3483425723U;
short var_1 = (short)30562;
unsigned int var_5 = 3390622862U;
signed char var_6 = (signed char)98;
unsigned short var_8 = (unsigned short)32541;
int zero = 0;
short var_10 = (short)-13459;
int var_11 = 1972990089;
unsigned long long int var_12 = 5550748885361625305ULL;
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
