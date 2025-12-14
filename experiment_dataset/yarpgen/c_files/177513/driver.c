#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -510855050;
unsigned int var_4 = 1805253684U;
unsigned short var_6 = (unsigned short)8900;
signed char var_12 = (signed char)-86;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)48;
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
