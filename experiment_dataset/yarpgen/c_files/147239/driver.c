#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45438;
short var_4 = (short)13068;
unsigned long long int var_5 = 4766095516937030326ULL;
unsigned char var_6 = (unsigned char)64;
unsigned char var_7 = (unsigned char)15;
unsigned long long int var_8 = 14043426887779647959ULL;
unsigned short var_10 = (unsigned short)38796;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)28352;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)163;
void init() {
}

void checksum() {
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
