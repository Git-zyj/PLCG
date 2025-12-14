#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned char var_14 = (unsigned char)68;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7902310436929353721LL;
unsigned short var_20 = (unsigned short)17535;
unsigned char var_21 = (unsigned char)60;
void init() {
}

void checksum() {
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
