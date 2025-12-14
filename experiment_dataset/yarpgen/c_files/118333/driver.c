#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-16605;
unsigned short var_8 = (unsigned short)41741;
unsigned int var_9 = 360570417U;
_Bool var_11 = (_Bool)1;
unsigned int var_16 = 3126213839U;
int zero = 0;
signed char var_20 = (signed char)4;
int var_21 = -1730214692;
int var_22 = -1916402345;
signed char var_23 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
