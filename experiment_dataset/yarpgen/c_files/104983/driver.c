#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10106380337691743302ULL;
unsigned char var_3 = (unsigned char)10;
unsigned char var_4 = (unsigned char)95;
short var_14 = (short)25159;
int var_15 = -1908180060;
int zero = 0;
short var_17 = (short)-24717;
short var_18 = (short)17188;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
