#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60072;
unsigned short var_2 = (unsigned short)39275;
unsigned int var_5 = 2501693158U;
signed char var_6 = (signed char)-125;
unsigned char var_7 = (unsigned char)198;
unsigned long long int var_8 = 9879576589536270053ULL;
long long int var_11 = -2968495346451141052LL;
signed char var_12 = (signed char)98;
int zero = 0;
unsigned int var_13 = 287810414U;
signed char var_14 = (signed char)42;
signed char var_15 = (signed char)-37;
short var_16 = (short)31691;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
