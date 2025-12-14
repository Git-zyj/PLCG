#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7985735089401066728ULL;
int var_4 = -1785739312;
unsigned long long int var_6 = 12747345153655670315ULL;
int var_8 = -438135895;
unsigned short var_10 = (unsigned short)56072;
int zero = 0;
signed char var_11 = (signed char)-82;
_Bool var_12 = (_Bool)0;
long long int var_13 = 3764219168272912156LL;
void init() {
}

void checksum() {
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
