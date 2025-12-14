#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)222;
unsigned int var_4 = 1288126132U;
short var_7 = (short)-16073;
short var_12 = (short)-2655;
int zero = 0;
unsigned long long int var_14 = 14519474465619732703ULL;
unsigned char var_15 = (unsigned char)41;
unsigned short var_16 = (unsigned short)42034;
short var_17 = (short)2695;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
