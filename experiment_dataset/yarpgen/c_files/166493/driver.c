#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30383;
long long int var_5 = -7382963148244626677LL;
unsigned char var_8 = (unsigned char)4;
short var_9 = (short)-2972;
int zero = 0;
unsigned short var_19 = (unsigned short)19052;
unsigned short var_20 = (unsigned short)42133;
void init() {
}

void checksum() {
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
