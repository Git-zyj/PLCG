#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_4 = (unsigned short)17281;
unsigned short var_7 = (unsigned short)37555;
signed char var_9 = (signed char)112;
int zero = 0;
unsigned int var_11 = 1838467762U;
signed char var_12 = (signed char)111;
int var_13 = 863920860;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
