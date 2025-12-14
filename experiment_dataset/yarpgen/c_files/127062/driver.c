#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned short var_6 = (unsigned short)35546;
unsigned int var_7 = 925604735U;
short var_9 = (short)18231;
int zero = 0;
long long int var_10 = -8690028750844387945LL;
unsigned long long int var_11 = 16778037797146181364ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
