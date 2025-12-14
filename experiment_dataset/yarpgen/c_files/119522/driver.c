#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 10258652359192234273ULL;
short var_5 = (short)28769;
unsigned char var_6 = (unsigned char)31;
short var_7 = (short)-32638;
short var_10 = (short)-15226;
int zero = 0;
unsigned int var_11 = 2104917874U;
unsigned int var_12 = 3430496612U;
int var_13 = 772293277;
void init() {
}

void checksum() {
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
