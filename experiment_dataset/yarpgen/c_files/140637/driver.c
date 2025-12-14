#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10147;
unsigned short var_3 = (unsigned short)56891;
unsigned short var_15 = (unsigned short)2338;
int zero = 0;
short var_17 = (short)-23133;
unsigned short var_18 = (unsigned short)43068;
unsigned long long int var_19 = 7267909990301562735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
