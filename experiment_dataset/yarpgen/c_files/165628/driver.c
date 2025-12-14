#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 655902852U;
unsigned int var_2 = 503929472U;
unsigned int var_4 = 1619419492U;
unsigned char var_6 = (unsigned char)91;
unsigned char var_8 = (unsigned char)50;
int zero = 0;
unsigned short var_10 = (unsigned short)51073;
unsigned short var_11 = (unsigned short)15236;
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
