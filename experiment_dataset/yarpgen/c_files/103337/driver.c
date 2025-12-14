#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3890461474U;
unsigned short var_2 = (unsigned short)21423;
unsigned char var_3 = (unsigned char)115;
unsigned short var_6 = (unsigned short)48555;
signed char var_7 = (signed char)-9;
unsigned short var_8 = (unsigned short)7698;
int var_10 = 1893161885;
long long int var_13 = -4640012544263647790LL;
int zero = 0;
unsigned char var_14 = (unsigned char)18;
unsigned short var_15 = (unsigned short)46563;
unsigned char var_16 = (unsigned char)32;
unsigned short var_17 = (unsigned short)52865;
signed char var_18 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
