#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11301;
unsigned short var_3 = (unsigned short)55230;
unsigned int var_4 = 3798760820U;
short var_6 = (short)-21699;
unsigned char var_7 = (unsigned char)169;
unsigned int var_13 = 1723699716U;
int zero = 0;
unsigned long long int var_16 = 221746047139173184ULL;
short var_17 = (short)-547;
void init() {
}

void checksum() {
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
