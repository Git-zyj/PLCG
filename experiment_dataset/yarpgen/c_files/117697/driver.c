#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)53;
unsigned char var_2 = (unsigned char)102;
signed char var_4 = (signed char)65;
unsigned short var_5 = (unsigned short)30421;
int var_7 = -1874515512;
short var_13 = (short)11960;
short var_14 = (short)-10280;
unsigned char var_15 = (unsigned char)100;
int zero = 0;
unsigned short var_17 = (unsigned short)50341;
unsigned short var_18 = (unsigned short)6816;
long long int var_19 = 499052448607083889LL;
unsigned char var_20 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
