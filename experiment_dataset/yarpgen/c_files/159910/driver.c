#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5843493471003481598LL;
short var_6 = (short)-9228;
unsigned short var_9 = (unsigned short)55131;
signed char var_11 = (signed char)-115;
unsigned int var_14 = 432086708U;
unsigned short var_15 = (unsigned short)61611;
unsigned int var_17 = 2997912732U;
int zero = 0;
unsigned int var_20 = 287877889U;
signed char var_21 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
