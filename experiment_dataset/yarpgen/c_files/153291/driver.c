#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
long long int var_3 = -7098977280414935352LL;
long long int var_4 = -2923050076283973851LL;
unsigned char var_6 = (unsigned char)37;
unsigned short var_7 = (unsigned short)64632;
unsigned short var_8 = (unsigned short)52152;
unsigned char var_9 = (unsigned char)158;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_12 = 3929116248U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)22475;
short var_15 = (short)13080;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
