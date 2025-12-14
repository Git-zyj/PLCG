#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10093320233060872220ULL;
int var_10 = 1381754309;
int zero = 0;
unsigned short var_13 = (unsigned short)62976;
long long int var_14 = 211070200874064092LL;
unsigned int var_15 = 3805261981U;
short var_16 = (short)-16343;
unsigned short var_17 = (unsigned short)42083;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
