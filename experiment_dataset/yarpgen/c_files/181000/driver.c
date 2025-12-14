#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
unsigned long long int var_1 = 12053061843176315966ULL;
unsigned char var_3 = (unsigned char)230;
signed char var_4 = (signed char)-50;
short var_6 = (short)-9921;
int zero = 0;
int var_15 = -1178138651;
unsigned char var_16 = (unsigned char)14;
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
