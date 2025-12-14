#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)35705;
int var_5 = -258926800;
_Bool var_7 = (_Bool)0;
long long int var_8 = -9170214485946683717LL;
int zero = 0;
unsigned char var_10 = (unsigned char)56;
short var_11 = (short)13556;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
