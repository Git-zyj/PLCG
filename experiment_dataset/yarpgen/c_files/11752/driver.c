#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1141391000;
int var_2 = 254175884;
int var_3 = -1092834378;
unsigned int var_5 = 1378193408U;
unsigned int var_6 = 3332932565U;
signed char var_8 = (signed char)110;
signed char var_9 = (signed char)-118;
int zero = 0;
short var_10 = (short)19647;
unsigned int var_11 = 158184446U;
unsigned int var_12 = 1640842409U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
