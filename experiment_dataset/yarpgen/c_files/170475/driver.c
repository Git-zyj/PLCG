#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned short var_4 = (unsigned short)5271;
unsigned char var_5 = (unsigned char)106;
int zero = 0;
short var_14 = (short)-27808;
unsigned long long int var_15 = 13388914070855627277ULL;
short var_16 = (short)-15950;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
