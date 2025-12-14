#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)38;
unsigned long long int var_8 = 9412555353709122863ULL;
unsigned char var_9 = (unsigned char)64;
unsigned char var_11 = (unsigned char)63;
unsigned char var_13 = (unsigned char)146;
unsigned char var_14 = (unsigned char)234;
int zero = 0;
unsigned char var_16 = (unsigned char)57;
unsigned char var_17 = (unsigned char)134;
unsigned char var_18 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
