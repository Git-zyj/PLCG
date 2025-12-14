#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)83;
signed char var_6 = (signed char)-97;
unsigned int var_12 = 463037369U;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int var_18 = -96131251;
int zero = 0;
int var_20 = 226226342;
short var_21 = (short)16043;
unsigned char var_22 = (unsigned char)172;
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
