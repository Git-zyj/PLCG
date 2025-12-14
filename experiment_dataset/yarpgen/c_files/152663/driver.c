#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)185;
unsigned short var_5 = (unsigned short)56218;
int var_6 = 285538914;
unsigned long long int var_8 = 13156700920394783250ULL;
short var_9 = (short)-28688;
unsigned short var_10 = (unsigned short)4145;
int zero = 0;
short var_11 = (short)-17504;
int var_12 = 471524413;
unsigned short var_13 = (unsigned short)61202;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
