#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -492146743;
unsigned long long int var_1 = 9593874264460515593ULL;
unsigned short var_2 = (unsigned short)39932;
long long int var_7 = 8080655245591904437LL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1187241056U;
int zero = 0;
short var_10 = (short)-12624;
unsigned int var_11 = 3798181415U;
unsigned int var_12 = 2246535280U;
signed char var_13 = (signed char)24;
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
