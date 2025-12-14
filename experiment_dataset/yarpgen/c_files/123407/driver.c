#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)87;
short var_4 = (short)-3543;
short var_5 = (short)-27716;
short var_7 = (short)17373;
int zero = 0;
unsigned char var_16 = (unsigned char)13;
unsigned char var_17 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
