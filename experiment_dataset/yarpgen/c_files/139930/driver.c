#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2474960224U;
short var_1 = (short)17042;
unsigned long long int var_4 = 5412565826725173677ULL;
int var_5 = 1747060189;
short var_6 = (short)-4297;
unsigned long long int var_7 = 16723329609257726017ULL;
unsigned long long int var_9 = 17258551149476447841ULL;
unsigned short var_10 = (unsigned short)48793;
int zero = 0;
unsigned short var_11 = (unsigned short)17058;
signed char var_12 = (signed char)42;
unsigned long long int var_13 = 1900255581077393174ULL;
short var_14 = (short)24727;
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
