#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12712;
signed char var_4 = (signed char)-84;
short var_5 = (short)8381;
unsigned char var_8 = (unsigned char)66;
int zero = 0;
unsigned short var_10 = (unsigned short)29221;
int var_11 = -1915683153;
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
