#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)18915;
unsigned long long int var_13 = 17331525172917592618ULL;
unsigned short var_14 = (unsigned short)58710;
long long int var_16 = -3750872353880912731LL;
int zero = 0;
unsigned int var_19 = 3763050077U;
int var_20 = -1463319940;
short var_21 = (short)-24383;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
