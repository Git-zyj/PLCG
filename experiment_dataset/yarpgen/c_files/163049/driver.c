#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65128;
unsigned short var_1 = (unsigned short)5628;
unsigned char var_2 = (unsigned char)4;
int var_4 = 63487921;
unsigned int var_8 = 3715779764U;
unsigned int var_10 = 1430267600U;
int zero = 0;
short var_12 = (short)-18310;
short var_13 = (short)15551;
unsigned long long int var_14 = 141583437605471280ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
