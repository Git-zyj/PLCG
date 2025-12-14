#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1065073064;
unsigned int var_6 = 1323119600U;
unsigned int var_7 = 3934202125U;
unsigned short var_9 = (unsigned short)53163;
short var_11 = (short)-9520;
int zero = 0;
int var_12 = -432708259;
short var_13 = (short)1781;
void init() {
}

void checksum() {
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
