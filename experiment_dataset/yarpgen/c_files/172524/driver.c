#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7902131861282039640ULL;
int var_1 = -669184663;
unsigned char var_3 = (unsigned char)235;
unsigned char var_6 = (unsigned char)218;
signed char var_8 = (signed char)74;
unsigned long long int var_10 = 13798899686830202561ULL;
int zero = 0;
long long int var_14 = -6515071198396089522LL;
unsigned short var_15 = (unsigned short)60916;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
