#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11375;
unsigned short var_2 = (unsigned short)24920;
short var_3 = (short)-14113;
short var_6 = (short)-26979;
signed char var_12 = (signed char)102;
unsigned short var_13 = (unsigned short)27435;
int zero = 0;
short var_14 = (short)10898;
unsigned long long int var_15 = 5335425238756633473ULL;
unsigned char var_16 = (unsigned char)202;
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
