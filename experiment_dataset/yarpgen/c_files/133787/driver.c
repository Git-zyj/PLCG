#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24974;
unsigned char var_1 = (unsigned char)199;
signed char var_2 = (signed char)-123;
unsigned char var_8 = (unsigned char)162;
int zero = 0;
signed char var_10 = (signed char)112;
unsigned char var_11 = (unsigned char)46;
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
