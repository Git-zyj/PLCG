#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-48;
unsigned short var_8 = (unsigned short)3280;
unsigned short var_9 = (unsigned short)65263;
unsigned char var_11 = (unsigned char)151;
short var_13 = (short)15201;
int zero = 0;
signed char var_15 = (signed char)-42;
short var_16 = (short)1624;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
