#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3753489116U;
int var_2 = 2051488955;
short var_6 = (short)-1370;
short var_10 = (short)-31166;
int zero = 0;
unsigned short var_11 = (unsigned short)24344;
signed char var_12 = (signed char)108;
int var_13 = -26231855;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
