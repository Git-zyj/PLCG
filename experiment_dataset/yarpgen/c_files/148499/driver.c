#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12019719648761351689ULL;
short var_6 = (short)-14634;
unsigned char var_7 = (unsigned char)64;
short var_10 = (short)31716;
unsigned short var_12 = (unsigned short)10305;
int zero = 0;
unsigned short var_13 = (unsigned short)1938;
short var_14 = (short)27149;
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
