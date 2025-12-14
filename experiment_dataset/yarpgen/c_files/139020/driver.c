#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29037;
unsigned char var_3 = (unsigned char)98;
int var_5 = -305703485;
unsigned int var_9 = 667073342U;
unsigned int var_11 = 119676062U;
unsigned long long int var_14 = 9952563798104427536ULL;
int var_18 = -325663370;
int zero = 0;
short var_20 = (short)-1727;
short var_21 = (short)15212;
int var_22 = -67324653;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
