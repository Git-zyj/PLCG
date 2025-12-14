#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
signed char var_2 = (signed char)-91;
unsigned long long int var_8 = 2234666919064826347ULL;
unsigned int var_10 = 1765916742U;
unsigned int var_11 = 4139016668U;
signed char var_17 = (signed char)78;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -785260590;
unsigned long long int var_21 = 13055197366719525117ULL;
short var_22 = (short)-31364;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
