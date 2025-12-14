#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4081632303U;
signed char var_3 = (signed char)-70;
long long int var_7 = 7387194546225970917LL;
unsigned short var_11 = (unsigned short)62669;
unsigned short var_14 = (unsigned short)58721;
int zero = 0;
unsigned short var_15 = (unsigned short)63174;
signed char var_16 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
