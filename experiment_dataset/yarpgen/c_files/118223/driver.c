#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)1;
unsigned long long int var_4 = 8155684272375960472ULL;
unsigned short var_5 = (unsigned short)47138;
short var_6 = (short)-30743;
int zero = 0;
unsigned long long int var_12 = 14348570476584241708ULL;
short var_13 = (short)6579;
unsigned int var_14 = 3912191612U;
unsigned long long int var_15 = 1912821961796588324ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
