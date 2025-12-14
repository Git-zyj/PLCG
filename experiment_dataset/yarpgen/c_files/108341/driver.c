#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10945435548304096460ULL;
int var_5 = 2071396824;
long long int var_6 = 8180391819092836158LL;
long long int var_7 = 7622340342091962213LL;
unsigned long long int var_9 = 387287406844925169ULL;
int var_10 = -1776066805;
_Bool var_12 = (_Bool)1;
int var_14 = 2016094921;
int var_16 = -1353813667;
int zero = 0;
unsigned int var_19 = 3490228002U;
short var_20 = (short)1396;
long long int var_21 = 5621704368596342767LL;
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
