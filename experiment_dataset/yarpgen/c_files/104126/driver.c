#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13296939031920207684ULL;
unsigned char var_1 = (unsigned char)114;
unsigned long long int var_3 = 8595415622288457680ULL;
short var_6 = (short)-31940;
unsigned short var_7 = (unsigned short)62729;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2407387240U;
unsigned long long int var_11 = 7227426080260671503ULL;
unsigned long long int var_12 = 15422663215770271061ULL;
signed char var_13 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
