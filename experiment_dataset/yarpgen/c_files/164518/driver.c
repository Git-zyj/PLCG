#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_6 = 1067219759;
unsigned char var_7 = (unsigned char)252;
short var_9 = (short)-20933;
unsigned long long int var_10 = 16479017370679122965ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)28669;
unsigned int var_14 = 3748580587U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
