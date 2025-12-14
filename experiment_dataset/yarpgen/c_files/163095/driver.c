#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 846281459985462928ULL;
unsigned short var_3 = (unsigned short)25450;
int zero = 0;
unsigned int var_14 = 3922221153U;
short var_15 = (short)-607;
unsigned long long int var_16 = 16517480115574435810ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
