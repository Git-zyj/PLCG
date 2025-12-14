#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
long long int var_1 = 6132468970272209821LL;
_Bool var_2 = (_Bool)1;
long long int var_4 = -5313343559840624556LL;
unsigned char var_5 = (unsigned char)35;
long long int var_8 = -4200390090659241797LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)55421;
unsigned long long int var_13 = 147025194771480118ULL;
unsigned int var_14 = 3152061426U;
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
