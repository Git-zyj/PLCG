#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1350953352U;
unsigned int var_2 = 4116582268U;
unsigned int var_8 = 3839597091U;
unsigned int var_10 = 1391176641U;
short var_11 = (short)-8422;
short var_18 = (short)-15520;
int zero = 0;
short var_20 = (short)-23682;
short var_21 = (short)12969;
short var_22 = (short)-4094;
void init() {
}

void checksum() {
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
