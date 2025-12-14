#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7532708137031876188ULL;
short var_1 = (short)6837;
unsigned char var_2 = (unsigned char)13;
signed char var_3 = (signed char)-84;
short var_4 = (short)32372;
short var_5 = (short)3590;
short var_6 = (short)-26463;
unsigned int var_7 = 1881285751U;
signed char var_8 = (signed char)24;
signed char var_10 = (signed char)65;
short var_11 = (short)-27619;
unsigned char var_12 = (unsigned char)203;
long long int var_13 = -223141257922125795LL;
unsigned char var_14 = (unsigned char)107;
short var_15 = (short)14267;
short var_16 = (short)-23766;
int zero = 0;
short var_18 = (short)-32068;
int var_19 = -1401854305;
signed char var_20 = (signed char)10;
void init() {
}

void checksum() {
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
