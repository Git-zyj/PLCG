#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)2;
unsigned long long int var_14 = 2491694688068366395ULL;
short var_16 = (short)28571;
int zero = 0;
signed char var_17 = (signed char)-69;
unsigned short var_18 = (unsigned short)36915;
unsigned long long int var_19 = 273900053142320909ULL;
signed char var_20 = (signed char)-75;
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
