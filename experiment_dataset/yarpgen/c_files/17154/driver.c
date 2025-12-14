#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)254;
signed char var_13 = (signed char)79;
unsigned long long int var_16 = 6491009362660592908ULL;
int zero = 0;
signed char var_19 = (signed char)-82;
signed char var_20 = (signed char)48;
signed char var_21 = (signed char)-108;
unsigned long long int var_22 = 1248463216643048593ULL;
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
