#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11201960002486667966ULL;
unsigned char var_10 = (unsigned char)204;
unsigned char var_15 = (unsigned char)178;
int zero = 0;
unsigned short var_19 = (unsigned short)54901;
int var_20 = -162550393;
long long int var_21 = 3785460892829277701LL;
signed char var_22 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
