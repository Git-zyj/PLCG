#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15952;
signed char var_6 = (signed char)-34;
unsigned int var_8 = 290965171U;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
unsigned short var_12 = (unsigned short)10225;
short var_13 = (short)-1553;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
