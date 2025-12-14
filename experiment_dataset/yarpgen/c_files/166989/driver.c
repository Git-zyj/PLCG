#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1227922657;
unsigned char var_2 = (unsigned char)167;
unsigned long long int var_4 = 4168325235894510428ULL;
short var_6 = (short)-6214;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 16152948753398143540ULL;
signed char var_9 = (signed char)-13;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 14637976685704704243ULL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)61057;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
