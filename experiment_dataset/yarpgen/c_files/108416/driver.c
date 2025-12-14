#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23265;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 3674253350641631421ULL;
int var_5 = 8987702;
unsigned short var_7 = (unsigned short)47535;
unsigned char var_8 = (unsigned char)53;
int var_10 = 303535831;
int zero = 0;
long long int var_11 = -860876962718360138LL;
signed char var_12 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
