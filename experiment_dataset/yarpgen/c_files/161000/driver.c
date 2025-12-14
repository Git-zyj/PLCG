#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)45870;
int var_5 = 2088522519;
unsigned long long int var_7 = 2187593406809231166ULL;
short var_13 = (short)-10951;
short var_15 = (short)19407;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
signed char var_20 = (signed char)-64;
long long int var_21 = 7047304606503035991LL;
short var_22 = (short)24280;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
