#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6375020860096129466ULL;
unsigned long long int var_12 = 13905083352541134071ULL;
short var_14 = (short)24879;
signed char var_17 = (signed char)-77;
int zero = 0;
signed char var_18 = (signed char)-54;
unsigned short var_19 = (unsigned short)55099;
signed char var_20 = (signed char)(-127 - 1);
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
