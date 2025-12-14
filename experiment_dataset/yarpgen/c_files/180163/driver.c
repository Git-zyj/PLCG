#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17019274593391256639ULL;
unsigned int var_6 = 3021219236U;
short var_7 = (short)19965;
unsigned int var_10 = 1675154939U;
unsigned short var_15 = (unsigned short)61589;
unsigned int var_18 = 109838474U;
int zero = 0;
short var_19 = (short)20891;
unsigned int var_20 = 1587553028U;
short var_21 = (short)-28605;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
