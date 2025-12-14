#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 327648133U;
int var_4 = -490799213;
unsigned char var_6 = (unsigned char)218;
signed char var_9 = (signed char)-34;
unsigned short var_11 = (unsigned short)64164;
int zero = 0;
unsigned short var_12 = (unsigned short)4535;
short var_13 = (short)-31346;
unsigned int var_14 = 3484750943U;
int var_15 = -668118851;
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
