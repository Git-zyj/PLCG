#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_3 = (unsigned short)13182;
short var_5 = (short)7841;
short var_6 = (short)-13798;
unsigned short var_7 = (unsigned short)30895;
unsigned char var_8 = (unsigned char)247;
long long int var_10 = -7142558599639016704LL;
signed char var_11 = (signed char)49;
int zero = 0;
signed char var_12 = (signed char)-37;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-20;
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
