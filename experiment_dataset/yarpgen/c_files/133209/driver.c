#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
unsigned short var_1 = (unsigned short)40921;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-56;
int var_8 = -158924160;
short var_10 = (short)8517;
int var_12 = 662761307;
int zero = 0;
signed char var_13 = (signed char)-82;
signed char var_14 = (signed char)-79;
int var_15 = 224926886;
int var_16 = 1532049027;
void init() {
}

void checksum() {
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
