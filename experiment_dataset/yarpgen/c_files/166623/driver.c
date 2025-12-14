#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
unsigned long long int var_1 = 7496938261659161896ULL;
signed char var_3 = (signed char)122;
short var_7 = (short)-7960;
unsigned long long int var_8 = 15729684098385200512ULL;
long long int var_13 = 2084670746469262937LL;
unsigned char var_15 = (unsigned char)122;
int zero = 0;
unsigned long long int var_16 = 17953648850679004623ULL;
short var_17 = (short)32570;
unsigned int var_18 = 673165508U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
