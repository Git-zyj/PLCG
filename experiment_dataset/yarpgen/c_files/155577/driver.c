#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3796;
long long int var_1 = 5189919688578651377LL;
signed char var_4 = (signed char)-111;
long long int var_6 = 2536125789938864220LL;
long long int var_7 = 6075061310040707642LL;
unsigned char var_8 = (unsigned char)156;
int var_9 = 1484278836;
short var_10 = (short)-8709;
int zero = 0;
signed char var_12 = (signed char)61;
unsigned char var_13 = (unsigned char)221;
signed char var_14 = (signed char)18;
unsigned short var_15 = (unsigned short)46723;
unsigned int var_16 = 1510963071U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
