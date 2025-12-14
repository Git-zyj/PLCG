#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
unsigned char var_4 = (unsigned char)74;
unsigned short var_10 = (unsigned short)7861;
unsigned short var_12 = (unsigned short)4769;
short var_13 = (short)-5234;
int zero = 0;
unsigned int var_15 = 370978028U;
short var_16 = (short)15218;
unsigned char var_17 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
