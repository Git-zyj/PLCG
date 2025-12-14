#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4201859346U;
_Bool var_8 = (_Bool)1;
long long int var_10 = 236895845569253289LL;
long long int var_13 = 4052335296211106445LL;
short var_15 = (short)-2743;
int zero = 0;
short var_17 = (short)-19252;
signed char var_18 = (signed char)-18;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)46;
unsigned short var_21 = (unsigned short)31753;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
