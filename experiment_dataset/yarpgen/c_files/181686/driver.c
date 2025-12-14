#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 839444845U;
unsigned short var_6 = (unsigned short)4535;
short var_7 = (short)-31787;
int zero = 0;
int var_12 = 483616415;
short var_13 = (short)-30364;
long long int var_14 = -5014882522359702629LL;
unsigned short var_15 = (unsigned short)34402;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
