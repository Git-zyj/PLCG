#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)81;
unsigned int var_10 = 2662771127U;
int var_14 = 1441031425;
unsigned char var_15 = (unsigned char)214;
int zero = 0;
unsigned long long int var_17 = 13013046636043509039ULL;
unsigned short var_18 = (unsigned short)12223;
void init() {
}

void checksum() {
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
