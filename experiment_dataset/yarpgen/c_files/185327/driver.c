#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_6 = (unsigned short)50426;
unsigned char var_8 = (unsigned char)74;
short var_9 = (short)-15051;
_Bool var_11 = (_Bool)0;
int var_13 = 1174639600;
_Bool var_15 = (_Bool)0;
int var_16 = 1109175392;
int zero = 0;
unsigned int var_19 = 2805094922U;
short var_20 = (short)-26738;
unsigned short var_21 = (unsigned short)15079;
void init() {
}

void checksum() {
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
