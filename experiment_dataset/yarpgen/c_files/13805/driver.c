#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -1850781485714456617LL;
_Bool var_9 = (_Bool)1;
int var_11 = -1406626367;
short var_12 = (short)747;
int zero = 0;
signed char var_18 = (signed char)2;
unsigned int var_19 = 37497813U;
unsigned short var_20 = (unsigned short)46295;
unsigned char var_21 = (unsigned char)217;
unsigned int var_22 = 4009294490U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
