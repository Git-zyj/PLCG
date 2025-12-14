#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 453596501U;
short var_14 = (short)-8078;
int zero = 0;
unsigned long long int var_19 = 5680296516882652255ULL;
unsigned long long int var_20 = 7750084689342780317ULL;
long long int var_21 = 2557703154404856182LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
