#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
short var_2 = (short)-25455;
unsigned char var_4 = (unsigned char)50;
short var_10 = (short)28806;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)29690;
unsigned short var_16 = (unsigned short)24382;
int zero = 0;
unsigned long long int var_18 = 13187891701971561467ULL;
unsigned short var_19 = (unsigned short)54169;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
