#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29975;
unsigned short var_3 = (unsigned short)32510;
unsigned char var_5 = (unsigned char)130;
unsigned char var_6 = (unsigned char)235;
short var_8 = (short)3186;
int zero = 0;
unsigned char var_10 = (unsigned char)137;
signed char var_11 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
