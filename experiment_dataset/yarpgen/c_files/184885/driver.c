#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35223;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 17215422494379390049ULL;
unsigned short var_10 = (unsigned short)2549;
int zero = 0;
signed char var_11 = (signed char)-45;
signed char var_12 = (signed char)53;
void init() {
}

void checksum() {
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
