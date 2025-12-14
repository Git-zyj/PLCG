#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
unsigned short var_4 = (unsigned short)64496;
int var_5 = -1620968348;
unsigned short var_7 = (unsigned short)24159;
short var_10 = (short)-17268;
int zero = 0;
unsigned long long int var_16 = 17951887237324018717ULL;
int var_17 = -602295089;
short var_18 = (short)18979;
int var_19 = 887302463;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
