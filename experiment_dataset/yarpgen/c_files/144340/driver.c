#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3333709116767719642ULL;
unsigned char var_4 = (unsigned char)184;
_Bool var_7 = (_Bool)0;
int var_8 = -512685952;
_Bool var_10 = (_Bool)0;
long long int var_11 = 86430202787204014LL;
unsigned char var_12 = (unsigned char)174;
short var_13 = (short)18931;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)22601;
unsigned char var_16 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
