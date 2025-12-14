#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -420739008;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 2899412589U;
unsigned long long int var_11 = 6587004849677297563ULL;
short var_16 = (short)-25172;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)8639;
unsigned short var_19 = (unsigned short)5793;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
