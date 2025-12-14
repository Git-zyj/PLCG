#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 489472705;
unsigned char var_3 = (unsigned char)27;
signed char var_5 = (signed char)7;
unsigned int var_7 = 934411612U;
int zero = 0;
short var_13 = (short)25041;
unsigned char var_14 = (unsigned char)176;
unsigned char var_15 = (unsigned char)46;
short var_16 = (short)-11298;
void init() {
}

void checksum() {
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
