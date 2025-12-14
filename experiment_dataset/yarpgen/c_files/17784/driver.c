#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11849;
long long int var_2 = 6338033121887906682LL;
unsigned short var_3 = (unsigned short)30071;
unsigned int var_5 = 1413153421U;
int zero = 0;
short var_10 = (short)-29319;
short var_11 = (short)21180;
unsigned char var_12 = (unsigned char)212;
signed char var_13 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
