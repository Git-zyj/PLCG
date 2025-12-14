#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14798901169111597846ULL;
unsigned char var_2 = (unsigned char)31;
short var_3 = (short)-25842;
signed char var_4 = (signed char)-9;
short var_6 = (short)23720;
signed char var_7 = (signed char)31;
unsigned char var_8 = (unsigned char)248;
unsigned int var_12 = 1975981399U;
unsigned short var_13 = (unsigned short)10600;
int zero = 0;
short var_15 = (short)-21312;
unsigned short var_16 = (unsigned short)64610;
short var_17 = (short)11994;
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
