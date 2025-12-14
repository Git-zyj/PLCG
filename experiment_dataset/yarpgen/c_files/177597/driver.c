#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned short var_1 = (unsigned short)17433;
unsigned long long int var_2 = 17878822981961865120ULL;
unsigned short var_3 = (unsigned short)52024;
signed char var_4 = (signed char)-69;
int zero = 0;
long long int var_10 = 1318357408015958976LL;
signed char var_11 = (signed char)119;
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
