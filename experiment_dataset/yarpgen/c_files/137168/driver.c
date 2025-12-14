#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)2651;
unsigned char var_12 = (unsigned char)137;
unsigned char var_17 = (unsigned char)106;
int zero = 0;
unsigned char var_20 = (unsigned char)44;
long long int var_21 = 5319403718581428025LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
