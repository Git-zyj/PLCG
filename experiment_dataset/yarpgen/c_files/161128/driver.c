#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12082434715074804058ULL;
signed char var_1 = (signed char)-79;
unsigned long long int var_5 = 8182715791813827183ULL;
int var_7 = 1304197771;
unsigned short var_8 = (unsigned short)12850;
unsigned short var_12 = (unsigned short)1474;
unsigned short var_13 = (unsigned short)30131;
int zero = 0;
short var_14 = (short)-6406;
unsigned short var_15 = (unsigned short)17514;
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
