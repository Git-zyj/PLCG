#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 192930087;
short var_4 = (short)-14597;
int var_9 = 1323091867;
signed char var_10 = (signed char)49;
int zero = 0;
signed char var_13 = (signed char)124;
long long int var_14 = -2477508988017663951LL;
unsigned long long int var_15 = 9055270985399780457ULL;
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
