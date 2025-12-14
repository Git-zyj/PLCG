#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15411461898211762066ULL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-100;
unsigned long long int var_6 = 11669464555583777757ULL;
unsigned short var_7 = (unsigned short)12069;
signed char var_8 = (signed char)4;
int zero = 0;
unsigned char var_10 = (unsigned char)211;
signed char var_11 = (signed char)23;
unsigned short var_12 = (unsigned short)53617;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
