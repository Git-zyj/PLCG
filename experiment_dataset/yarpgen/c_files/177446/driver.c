#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 882653614;
unsigned long long int var_9 = 1999151232090298881ULL;
int zero = 0;
signed char var_10 = (signed char)74;
unsigned int var_11 = 1973958772U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-30733;
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
