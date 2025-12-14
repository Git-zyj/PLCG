#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1314;
short var_6 = (short)32432;
short var_7 = (short)10331;
unsigned short var_8 = (unsigned short)44046;
int zero = 0;
short var_11 = (short)-12017;
unsigned int var_12 = 3492569989U;
void init() {
}

void checksum() {
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
