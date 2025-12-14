#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned int var_1 = 912639966U;
unsigned int var_2 = 510259091U;
unsigned short var_3 = (unsigned short)46498;
unsigned short var_6 = (unsigned short)5817;
int zero = 0;
unsigned char var_10 = (unsigned char)53;
unsigned long long int var_11 = 1770590788226095137ULL;
int var_12 = -1226836386;
signed char var_13 = (signed char)-40;
unsigned int var_14 = 1641318939U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
