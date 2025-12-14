#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1810120955765972550ULL;
unsigned short var_8 = (unsigned short)21437;
signed char var_13 = (signed char)43;
unsigned short var_19 = (unsigned short)59198;
int zero = 0;
unsigned int var_20 = 3192811728U;
unsigned char var_21 = (unsigned char)67;
unsigned char var_22 = (unsigned char)128;
unsigned char var_23 = (unsigned char)96;
unsigned int var_24 = 1955287843U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
