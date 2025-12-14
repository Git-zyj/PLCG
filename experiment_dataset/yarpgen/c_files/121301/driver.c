#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 223128648U;
unsigned short var_2 = (unsigned short)56000;
short var_7 = (short)-4572;
unsigned short var_12 = (unsigned short)35102;
int zero = 0;
unsigned int var_15 = 4276766928U;
unsigned int var_16 = 4015521379U;
short var_17 = (short)-12857;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
