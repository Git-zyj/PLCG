#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)224;
int var_3 = 1961375639;
unsigned char var_4 = (unsigned char)174;
unsigned long long int var_6 = 2127686321350618751ULL;
int zero = 0;
signed char var_10 = (signed char)80;
long long int var_11 = 3238198411967826348LL;
unsigned char var_12 = (unsigned char)105;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
