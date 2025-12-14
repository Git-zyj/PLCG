#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5555;
int var_2 = -140239819;
unsigned int var_3 = 954294584U;
unsigned char var_6 = (unsigned char)10;
int var_7 = 283569478;
long long int var_8 = -3774603579352962038LL;
int var_9 = -2137093661;
unsigned short var_10 = (unsigned short)2997;
signed char var_11 = (signed char)-63;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 231005172U;
int var_14 = -880141537;
unsigned short var_16 = (unsigned short)45020;
short var_17 = (short)-7577;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)64994;
unsigned short var_20 = (unsigned short)48993;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-846;
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
