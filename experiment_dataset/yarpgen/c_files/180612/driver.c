#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1565138565574700141ULL;
long long int var_2 = -238982132062571195LL;
unsigned int var_3 = 1038246709U;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)105;
signed char var_9 = (signed char)-8;
short var_13 = (short)1936;
int zero = 0;
unsigned int var_16 = 1439842985U;
unsigned long long int var_17 = 15921097062201149667ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
