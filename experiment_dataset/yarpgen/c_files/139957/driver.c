#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2265972204390673869LL;
unsigned int var_2 = 1837673612U;
signed char var_7 = (signed char)-70;
int var_10 = -1897244702;
int zero = 0;
int var_11 = -73850127;
signed char var_12 = (signed char)62;
signed char var_13 = (signed char)-21;
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
