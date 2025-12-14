#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1519742072;
unsigned char var_2 = (unsigned char)227;
unsigned short var_4 = (unsigned short)50092;
int var_6 = -1035498347;
signed char var_7 = (signed char)-51;
short var_8 = (short)-31548;
int zero = 0;
short var_10 = (short)12166;
signed char var_11 = (signed char)109;
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
