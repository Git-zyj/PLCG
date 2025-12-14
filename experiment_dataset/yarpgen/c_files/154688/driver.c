#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51587;
signed char var_10 = (signed char)-108;
short var_11 = (short)-15378;
int var_13 = 494880131;
short var_17 = (short)-27660;
int zero = 0;
unsigned char var_18 = (unsigned char)223;
short var_19 = (short)5699;
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
