#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8855677959951044241ULL;
int var_4 = -32579277;
short var_6 = (short)6918;
short var_9 = (short)-15082;
short var_11 = (short)32064;
int zero = 0;
short var_18 = (short)-13216;
unsigned short var_19 = (unsigned short)33452;
void init() {
}

void checksum() {
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
