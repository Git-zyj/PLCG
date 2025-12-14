#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
short var_4 = (short)10881;
short var_6 = (short)-32415;
int zero = 0;
unsigned int var_12 = 1439539234U;
unsigned long long int var_13 = 4104168103684872667ULL;
unsigned char var_14 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
