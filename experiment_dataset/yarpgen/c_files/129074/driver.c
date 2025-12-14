#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33474;
unsigned short var_2 = (unsigned short)34195;
unsigned short var_4 = (unsigned short)21999;
unsigned short var_5 = (unsigned short)24423;
unsigned short var_6 = (unsigned short)15574;
unsigned short var_10 = (unsigned short)23995;
unsigned long long int var_11 = 18099239117279750508ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)3224;
signed char var_20 = (signed char)-102;
unsigned char var_21 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
