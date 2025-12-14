#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21178;
short var_6 = (short)12001;
unsigned long long int var_9 = 13315848004852663799ULL;
unsigned short var_10 = (unsigned short)46659;
int zero = 0;
signed char var_17 = (signed char)-33;
unsigned int var_18 = 3245386279U;
short var_19 = (short)30868;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
