#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3014778326U;
unsigned char var_10 = (unsigned char)217;
unsigned char var_13 = (unsigned char)148;
signed char var_14 = (signed char)109;
int zero = 0;
unsigned short var_16 = (unsigned short)52565;
unsigned short var_17 = (unsigned short)38142;
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
