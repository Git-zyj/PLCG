#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14879;
unsigned long long int var_6 = 12040693522035298851ULL;
short var_7 = (short)-236;
unsigned long long int var_12 = 13365119510910631407ULL;
unsigned int var_13 = 2558207827U;
int zero = 0;
short var_14 = (short)19851;
int var_15 = 1268635648;
unsigned short var_16 = (unsigned short)8274;
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
