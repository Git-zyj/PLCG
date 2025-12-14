#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4192250585U;
unsigned short var_2 = (unsigned short)52312;
short var_3 = (short)15817;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 149075336U;
signed char var_7 = (signed char)-21;
int var_9 = 949252434;
unsigned int var_10 = 3102020164U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2781694359U;
signed char var_14 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
