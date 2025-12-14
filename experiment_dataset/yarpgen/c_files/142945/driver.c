#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned short var_11 = (unsigned short)42973;
int var_13 = 1128653025;
unsigned short var_16 = (unsigned short)35951;
int var_17 = 1914389683;
unsigned long long int var_19 = 15264895901690473192ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)39619;
unsigned int var_21 = 2759905441U;
unsigned char var_22 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
