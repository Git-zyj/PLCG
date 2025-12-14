#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4042736986440557283LL;
unsigned short var_6 = (unsigned short)53614;
short var_9 = (short)-3776;
long long int var_11 = 7273618952898672608LL;
unsigned int var_12 = 2094124362U;
unsigned long long int var_15 = 9760216034941312531ULL;
unsigned long long int var_16 = 11147183296020297523ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1234518953U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
