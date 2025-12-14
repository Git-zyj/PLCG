#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58512;
unsigned char var_2 = (unsigned char)222;
unsigned long long int var_7 = 17154938398610310262ULL;
int var_8 = -331854223;
int zero = 0;
signed char var_10 = (signed char)105;
signed char var_11 = (signed char)-53;
long long int var_12 = -7050040195474717880LL;
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
