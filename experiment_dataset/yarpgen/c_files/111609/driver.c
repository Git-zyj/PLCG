#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
short var_5 = (short)8274;
unsigned short var_8 = (unsigned short)49158;
int zero = 0;
unsigned int var_12 = 1497042128U;
short var_13 = (short)-3965;
unsigned long long int var_14 = 7242032513052474092ULL;
unsigned char var_15 = (unsigned char)241;
unsigned char var_16 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
