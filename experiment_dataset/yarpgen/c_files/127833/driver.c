#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
short var_1 = (short)29114;
short var_2 = (short)27654;
unsigned int var_5 = 2570298209U;
int var_6 = -768132797;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
int var_13 = -877981709;
unsigned char var_14 = (unsigned char)9;
unsigned short var_15 = (unsigned short)45741;
int var_16 = -385654307;
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
