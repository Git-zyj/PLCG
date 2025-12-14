#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1810710606943593524LL;
unsigned char var_4 = (unsigned char)5;
short var_6 = (short)-16877;
unsigned short var_7 = (unsigned short)29512;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_12 = (short)-20773;
int var_13 = -2081216745;
void init() {
}

void checksum() {
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
