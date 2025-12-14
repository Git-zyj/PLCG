#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32294;
unsigned short var_4 = (unsigned short)6273;
signed char var_7 = (signed char)-121;
int var_8 = 627422989;
unsigned short var_15 = (unsigned short)58164;
int zero = 0;
unsigned char var_20 = (unsigned char)220;
unsigned int var_21 = 2216731062U;
unsigned short var_22 = (unsigned short)24752;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
