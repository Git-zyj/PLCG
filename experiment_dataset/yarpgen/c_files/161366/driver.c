#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -182637891;
unsigned long long int var_4 = 5646073573406639908ULL;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-24982;
unsigned int var_7 = 1328141724U;
unsigned short var_9 = (unsigned short)28302;
int zero = 0;
unsigned short var_10 = (unsigned short)45363;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-6724;
int var_13 = -1164433494;
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
