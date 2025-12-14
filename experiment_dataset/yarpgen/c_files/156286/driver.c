#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14382;
short var_4 = (short)-25792;
int var_5 = -497989807;
int var_6 = 1416043970;
unsigned short var_11 = (unsigned short)58855;
long long int var_15 = 5108370713945713735LL;
int zero = 0;
signed char var_16 = (signed char)-127;
unsigned char var_17 = (unsigned char)111;
unsigned int var_18 = 666435028U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
