#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_4 = 3604094080U;
signed char var_9 = (signed char)-121;
unsigned long long int var_12 = 1461137749400661774ULL;
short var_17 = (short)-2972;
int zero = 0;
unsigned short var_18 = (unsigned short)7203;
int var_19 = 528553530;
void init() {
}

void checksum() {
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
