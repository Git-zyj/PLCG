#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -578649895;
unsigned char var_1 = (unsigned char)27;
unsigned char var_2 = (unsigned char)50;
int var_11 = -1775654529;
_Bool var_12 = (_Bool)0;
int var_15 = -1900250545;
int var_17 = -2145328985;
int zero = 0;
unsigned short var_20 = (unsigned short)58970;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)8357;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
