#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)19194;
unsigned int var_5 = 2979534021U;
unsigned char var_8 = (unsigned char)223;
int var_9 = 252888406;
_Bool var_11 = (_Bool)1;
int var_12 = 2089748530;
unsigned char var_14 = (unsigned char)81;
unsigned int var_16 = 2529291655U;
int zero = 0;
unsigned short var_20 = (unsigned short)18345;
int var_21 = -557372438;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)1937;
short var_24 = (short)-2665;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
