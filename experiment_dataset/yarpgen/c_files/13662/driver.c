#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-58;
unsigned char var_5 = (unsigned char)240;
int var_6 = -793503911;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 10841244694435805295ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)46;
unsigned int var_13 = 3241285777U;
unsigned short var_14 = (unsigned short)60820;
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
