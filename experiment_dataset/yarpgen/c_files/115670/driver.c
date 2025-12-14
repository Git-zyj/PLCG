#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32317;
short var_3 = (short)-15248;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)123;
short var_9 = (short)-27232;
int zero = 0;
short var_12 = (short)7725;
unsigned char var_13 = (unsigned char)213;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
