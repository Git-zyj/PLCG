#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)243;
unsigned long long int var_2 = 6086452559028330040ULL;
signed char var_5 = (signed char)-88;
signed char var_6 = (signed char)93;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2089416344U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
