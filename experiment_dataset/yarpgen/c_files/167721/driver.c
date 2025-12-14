#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)200;
signed char var_3 = (signed char)(-127 - 1);
long long int var_5 = -3095762708232330563LL;
unsigned short var_17 = (unsigned short)43485;
int zero = 0;
unsigned int var_18 = 436365124U;
int var_19 = -873390146;
short var_20 = (short)-4625;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
