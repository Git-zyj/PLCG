#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 558309237U;
unsigned int var_5 = 1938262091U;
short var_8 = (short)-17441;
unsigned int var_16 = 411876480U;
int zero = 0;
short var_18 = (short)-3399;
short var_19 = (short)-32627;
unsigned int var_20 = 1969890301U;
short var_21 = (short)-12145;
short var_22 = (short)-31819;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
