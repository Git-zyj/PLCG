#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)50;
unsigned int var_3 = 1348810883U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-24702;
_Bool var_6 = (_Bool)1;
int var_7 = -908727172;
int var_8 = -1170728351;
int var_10 = -1941446437;
unsigned int var_11 = 1137290418U;
int zero = 0;
unsigned long long int var_12 = 18121061305328359367ULL;
int var_13 = -1047007391;
int var_14 = 1465950331;
void init() {
}

void checksum() {
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
