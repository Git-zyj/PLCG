#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1658776934;
unsigned long long int var_1 = 2125302559682174905ULL;
_Bool var_2 = (_Bool)1;
int var_5 = -1341865065;
unsigned long long int var_6 = 13102700604871258671ULL;
signed char var_8 = (signed char)12;
short var_9 = (short)16624;
unsigned int var_10 = 3525619363U;
unsigned int var_11 = 1421994618U;
unsigned int var_12 = 3311735124U;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
unsigned char var_17 = (unsigned char)231;
signed char var_18 = (signed char)70;
unsigned long long int var_19 = 17486523867829666494ULL;
short var_20 = (short)21994;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
