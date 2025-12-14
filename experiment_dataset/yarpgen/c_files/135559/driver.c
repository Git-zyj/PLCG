#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15053434744004165651ULL;
unsigned char var_7 = (unsigned char)250;
unsigned char var_8 = (unsigned char)16;
int zero = 0;
unsigned long long int var_11 = 12435123589568535294ULL;
unsigned char var_12 = (unsigned char)2;
short var_13 = (short)-369;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
