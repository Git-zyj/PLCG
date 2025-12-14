#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28713;
unsigned short var_5 = (unsigned short)21848;
unsigned int var_11 = 926555892U;
short var_13 = (short)-21011;
short var_14 = (short)-4716;
int zero = 0;
int var_15 = 1390336262;
short var_16 = (short)-17999;
void init() {
}

void checksum() {
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
