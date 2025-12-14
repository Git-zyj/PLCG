#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)15094;
short var_6 = (short)26276;
unsigned char var_13 = (unsigned char)171;
int zero = 0;
long long int var_14 = 6004862928874961886LL;
short var_15 = (short)27012;
unsigned char var_16 = (unsigned char)124;
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
