#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 1160784787;
long long int var_10 = 943659622655264687LL;
unsigned long long int var_12 = 2137673838766776484ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 1533618452415666944ULL;
int var_18 = -1605359653;
int zero = 0;
unsigned long long int var_19 = 13751095005378080692ULL;
short var_20 = (short)-12453;
void init() {
}

void checksum() {
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
