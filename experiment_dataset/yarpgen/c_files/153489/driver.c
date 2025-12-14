#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)122;
short var_7 = (short)-1834;
unsigned int var_10 = 3741133461U;
signed char var_11 = (signed char)-4;
signed char var_13 = (signed char)-82;
unsigned int var_16 = 2836413556U;
int zero = 0;
unsigned long long int var_20 = 1712296916756232235ULL;
unsigned char var_21 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
