#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)18;
int var_1 = -862224307;
int var_2 = -71137447;
unsigned int var_5 = 1686230878U;
short var_6 = (short)1088;
long long int var_8 = -2319099902046819790LL;
unsigned char var_9 = (unsigned char)147;
unsigned short var_10 = (unsigned short)4302;
int zero = 0;
unsigned char var_11 = (unsigned char)74;
unsigned long long int var_12 = 8987761521248389662ULL;
unsigned int var_13 = 1222467364U;
unsigned int var_14 = 3156334920U;
unsigned long long int var_15 = 4858014297627979508ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
