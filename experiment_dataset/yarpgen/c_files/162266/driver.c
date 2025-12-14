#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12144;
short var_3 = (short)15869;
short var_6 = (short)-23595;
short var_7 = (short)-15732;
short var_9 = (short)-29044;
short var_10 = (short)-746;
short var_11 = (short)6166;
short var_12 = (short)7966;
int zero = 0;
short var_15 = (short)18589;
short var_16 = (short)1886;
short var_17 = (short)-19123;
void init() {
}

void checksum() {
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
