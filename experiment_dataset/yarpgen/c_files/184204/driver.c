#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25380;
short var_2 = (short)-18137;
unsigned int var_3 = 3714066941U;
int var_4 = 308822690;
int var_5 = -1735699604;
short var_6 = (short)32738;
short var_7 = (short)-21162;
short var_8 = (short)11717;
short var_10 = (short)24728;
short var_13 = (short)-21832;
int zero = 0;
short var_14 = (short)19390;
unsigned char var_15 = (unsigned char)170;
void init() {
}

void checksum() {
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
