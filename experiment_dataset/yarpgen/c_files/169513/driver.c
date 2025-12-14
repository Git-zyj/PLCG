#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14379082453195084166ULL;
short var_3 = (short)11933;
unsigned short var_8 = (unsigned short)15323;
int var_16 = -1662689565;
int zero = 0;
signed char var_17 = (signed char)-61;
unsigned long long int var_18 = 301102464487787203ULL;
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
