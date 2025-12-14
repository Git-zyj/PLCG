#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11771685121150153916ULL;
int var_9 = -267013461;
signed char var_10 = (signed char)86;
long long int var_15 = 9121442541615366967LL;
int zero = 0;
short var_18 = (short)-7678;
short var_19 = (short)16211;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
