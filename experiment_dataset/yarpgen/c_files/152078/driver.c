#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6993808818513784462ULL;
unsigned long long int var_4 = 9477797006969336225ULL;
signed char var_5 = (signed char)-25;
unsigned char var_7 = (unsigned char)24;
int zero = 0;
unsigned short var_10 = (unsigned short)16548;
unsigned char var_11 = (unsigned char)53;
long long int var_12 = 3223022498997042970LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
