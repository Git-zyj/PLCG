#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-9918;
int var_4 = 782574198;
long long int var_6 = 8687739636497533875LL;
unsigned char var_8 = (unsigned char)74;
int zero = 0;
long long int var_13 = 1109811645952994346LL;
short var_14 = (short)8646;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
