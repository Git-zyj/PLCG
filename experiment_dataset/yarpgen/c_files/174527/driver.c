#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12227;
unsigned long long int var_6 = 18207383219031407142ULL;
int zero = 0;
int var_19 = 477156116;
unsigned long long int var_20 = 7048231428896825026ULL;
short var_21 = (short)27985;
int var_22 = -1023811344;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
