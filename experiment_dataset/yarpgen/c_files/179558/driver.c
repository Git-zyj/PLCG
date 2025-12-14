#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2035568661;
signed char var_6 = (signed char)108;
unsigned int var_8 = 3152811053U;
unsigned int var_12 = 4028725800U;
int zero = 0;
unsigned int var_13 = 3902844852U;
unsigned int var_14 = 2150038299U;
unsigned int var_15 = 3683133776U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
