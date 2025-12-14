#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned char var_4 = (unsigned char)176;
unsigned short var_5 = (unsigned short)45509;
unsigned char var_6 = (unsigned char)54;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)101;
int zero = 0;
unsigned long long int var_10 = 5827913903379152455ULL;
int var_11 = -461314490;
short var_12 = (short)-876;
int var_13 = -1244016277;
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
