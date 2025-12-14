#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17444781829491488722ULL;
int var_1 = -374556537;
short var_3 = (short)11940;
unsigned short var_5 = (unsigned short)5637;
unsigned char var_6 = (unsigned char)60;
int var_7 = -1526403216;
unsigned short var_10 = (unsigned short)40711;
int zero = 0;
unsigned short var_13 = (unsigned short)33869;
short var_14 = (short)-8140;
unsigned char var_15 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
