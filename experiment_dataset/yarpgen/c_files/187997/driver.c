#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1999064461;
unsigned long long int var_1 = 15638529667365805856ULL;
long long int var_7 = -5216894620763986651LL;
unsigned short var_10 = (unsigned short)20993;
int zero = 0;
signed char var_12 = (signed char)2;
signed char var_13 = (signed char)-24;
void init() {
}

void checksum() {
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
