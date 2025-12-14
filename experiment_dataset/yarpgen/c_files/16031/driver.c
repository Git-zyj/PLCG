#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
signed char var_2 = (signed char)-85;
signed char var_3 = (signed char)16;
short var_4 = (short)-7611;
signed char var_5 = (signed char)-27;
unsigned int var_6 = 1272354430U;
unsigned short var_7 = (unsigned short)15161;
unsigned long long int var_10 = 9301452585863435155ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)65263;
signed char var_12 = (signed char)10;
signed char var_13 = (signed char)87;
long long int var_14 = -1089776758682121346LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
