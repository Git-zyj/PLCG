#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)12854;
unsigned char var_11 = (unsigned char)129;
unsigned char var_13 = (unsigned char)228;
short var_14 = (short)-3970;
unsigned int var_15 = 1550290502U;
int zero = 0;
unsigned long long int var_16 = 16630612426682817818ULL;
short var_17 = (short)10942;
unsigned char var_18 = (unsigned char)154;
void init() {
}

void checksum() {
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
