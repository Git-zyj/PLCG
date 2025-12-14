#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-92;
unsigned short var_6 = (unsigned short)12045;
unsigned long long int var_8 = 14950761962285461038ULL;
long long int var_12 = -7765321033323006162LL;
unsigned char var_17 = (unsigned char)187;
int zero = 0;
unsigned short var_18 = (unsigned short)59220;
int var_19 = -1115499986;
unsigned int var_20 = 843222171U;
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
