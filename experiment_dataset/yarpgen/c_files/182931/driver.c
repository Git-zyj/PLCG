#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1592576922028504897ULL;
unsigned long long int var_7 = 3590317514263713250ULL;
int zero = 0;
unsigned long long int var_13 = 880821566129540869ULL;
signed char var_14 = (signed char)-31;
short var_15 = (short)-6693;
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
