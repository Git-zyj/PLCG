#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16933;
unsigned short var_4 = (unsigned short)25311;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 2651961564U;
short var_10 = (short)-14540;
int zero = 0;
short var_11 = (short)27806;
unsigned long long int var_12 = 6304045044258726940ULL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 16151498611419173778ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
