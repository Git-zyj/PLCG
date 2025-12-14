#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14498;
signed char var_2 = (signed char)-55;
unsigned int var_6 = 2350157563U;
short var_8 = (short)-27403;
unsigned char var_11 = (unsigned char)231;
int var_14 = -1305186568;
unsigned short var_15 = (unsigned short)48410;
int zero = 0;
unsigned long long int var_19 = 731262068418962297ULL;
long long int var_20 = -8393903185578291722LL;
unsigned long long int var_21 = 5154812030238176404ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
