#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1931391544U;
unsigned int var_8 = 1000996447U;
unsigned char var_9 = (unsigned char)244;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
short var_12 = (short)22598;
unsigned int var_13 = 2619746499U;
signed char var_14 = (signed char)48;
signed char var_15 = (signed char)77;
unsigned char var_16 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
