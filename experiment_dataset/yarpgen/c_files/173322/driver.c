#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29132;
unsigned short var_3 = (unsigned short)35843;
unsigned short var_5 = (unsigned short)47122;
unsigned short var_8 = (unsigned short)29441;
signed char var_15 = (signed char)-83;
int zero = 0;
long long int var_16 = 5709584839277890698LL;
short var_17 = (short)-16474;
int var_18 = 1359344555;
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
