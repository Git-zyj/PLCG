#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1769896344396112972ULL;
_Bool var_6 = (_Bool)1;
int var_8 = -1398540310;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 368283828U;
signed char var_11 = (signed char)93;
int zero = 0;
short var_13 = (short)-5050;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
