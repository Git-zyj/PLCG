#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54254;
signed char var_1 = (signed char)-32;
unsigned char var_2 = (unsigned char)31;
unsigned char var_8 = (unsigned char)1;
int var_9 = -131180265;
int zero = 0;
unsigned short var_16 = (unsigned short)184;
unsigned char var_17 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
