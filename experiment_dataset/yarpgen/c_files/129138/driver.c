#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
short var_1 = (short)30528;
short var_6 = (short)30048;
unsigned char var_7 = (unsigned char)167;
long long int var_8 = -5583233817412167257LL;
short var_9 = (short)-13284;
int zero = 0;
int var_11 = 875563100;
short var_12 = (short)355;
short var_13 = (short)-12678;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
