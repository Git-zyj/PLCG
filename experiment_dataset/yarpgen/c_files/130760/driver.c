#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2558265778U;
signed char var_5 = (signed char)-69;
unsigned short var_7 = (unsigned short)18704;
int zero = 0;
int var_17 = 1379972739;
unsigned long long int var_18 = 17883161838318079624ULL;
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
