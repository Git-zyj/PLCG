#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned char var_1 = (unsigned char)146;
unsigned short var_2 = (unsigned short)19258;
signed char var_3 = (signed char)11;
unsigned short var_10 = (unsigned short)64331;
unsigned short var_11 = (unsigned short)35231;
int zero = 0;
signed char var_15 = (signed char)33;
long long int var_16 = -9191366580629167573LL;
short var_17 = (short)-29587;
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
