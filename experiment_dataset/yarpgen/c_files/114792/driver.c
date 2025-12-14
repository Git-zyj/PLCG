#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
int var_5 = 160121759;
int var_6 = -1993525043;
int var_8 = -1101333870;
signed char var_11 = (signed char)22;
unsigned int var_13 = 1157623574U;
int var_14 = -1523325613;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)15616;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = -524461566;
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
