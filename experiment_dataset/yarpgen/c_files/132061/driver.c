#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6363222276741363070ULL;
unsigned short var_6 = (unsigned short)12198;
unsigned short var_10 = (unsigned short)3919;
unsigned short var_13 = (unsigned short)23669;
unsigned long long int var_15 = 18140875873929267356ULL;
int var_16 = -313713862;
unsigned char var_19 = (unsigned char)31;
int zero = 0;
unsigned long long int var_20 = 16387636124069031814ULL;
unsigned short var_21 = (unsigned short)62251;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 1365610073376039731ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
