#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3712242699U;
signed char var_16 = (signed char)-16;
int zero = 0;
long long int var_17 = 1664139263387111383LL;
unsigned short var_18 = (unsigned short)39067;
short var_19 = (short)9409;
unsigned short var_20 = (unsigned short)41524;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
