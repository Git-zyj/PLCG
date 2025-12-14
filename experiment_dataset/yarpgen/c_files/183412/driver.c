#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4420803890250984813LL;
unsigned short var_10 = (unsigned short)21563;
signed char var_14 = (signed char)80;
long long int var_16 = 1267235114661374525LL;
int zero = 0;
short var_17 = (short)-13990;
unsigned char var_18 = (unsigned char)223;
unsigned int var_19 = 991609272U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
