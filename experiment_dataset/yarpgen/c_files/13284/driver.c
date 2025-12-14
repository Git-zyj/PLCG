#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20527;
unsigned short var_7 = (unsigned short)15219;
long long int var_8 = -6478631087916206873LL;
short var_9 = (short)852;
int zero = 0;
short var_11 = (short)6586;
unsigned short var_12 = (unsigned short)30571;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
