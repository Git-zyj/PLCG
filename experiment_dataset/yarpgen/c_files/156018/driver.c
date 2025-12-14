#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2098933257U;
int var_3 = 1945810799;
int var_4 = -1131193790;
unsigned long long int var_6 = 14793925719077995088ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_11 = 462231900;
unsigned char var_12 = (unsigned char)14;
unsigned short var_13 = (unsigned short)1887;
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
