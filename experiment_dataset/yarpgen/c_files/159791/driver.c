#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1354704615;
signed char var_1 = (signed char)110;
unsigned int var_2 = 3064567152U;
int var_6 = -1328280931;
unsigned short var_7 = (unsigned short)29433;
unsigned int var_8 = 622839487U;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)35;
signed char var_14 = (signed char)10;
unsigned short var_15 = (unsigned short)35645;
int var_16 = -1216360213;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
