#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57841;
int var_3 = 1294107837;
unsigned long long int var_4 = 4287524338678376081ULL;
unsigned short var_5 = (unsigned short)9509;
signed char var_10 = (signed char)-8;
int zero = 0;
int var_16 = 391705112;
signed char var_17 = (signed char)9;
unsigned char var_18 = (unsigned char)165;
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
