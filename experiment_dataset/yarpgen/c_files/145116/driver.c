#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16237428982157397922ULL;
short var_6 = (short)25016;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16890923126830851665ULL;
unsigned long long int var_10 = 17803939180363178958ULL;
unsigned char var_13 = (unsigned char)84;
int zero = 0;
unsigned int var_16 = 3147052329U;
unsigned char var_17 = (unsigned char)68;
unsigned char var_18 = (unsigned char)245;
signed char var_19 = (signed char)-48;
unsigned short var_20 = (unsigned short)62165;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
