#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11353714499397991814ULL;
signed char var_10 = (signed char)-10;
int zero = 0;
unsigned long long int var_11 = 16262611746031744565ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)163;
unsigned int var_14 = 374353628U;
unsigned int var_15 = 3624093283U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
