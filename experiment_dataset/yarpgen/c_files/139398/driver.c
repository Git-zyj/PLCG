#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5522;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-31364;
unsigned char var_4 = (unsigned char)6;
int var_6 = 425206513;
signed char var_8 = (signed char)39;
int zero = 0;
short var_10 = (short)-6609;
unsigned long long int var_11 = 2561630586287012852ULL;
signed char var_12 = (signed char)36;
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
