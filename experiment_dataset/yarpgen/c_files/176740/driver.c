#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26630;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)26462;
unsigned short var_5 = (unsigned short)35351;
unsigned char var_6 = (unsigned char)178;
long long int var_7 = 4364950910512164821LL;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 3646930880U;
unsigned short var_11 = (unsigned short)65352;
signed char var_13 = (signed char)-107;
signed char var_14 = (signed char)11;
_Bool var_15 = (_Bool)0;
short var_19 = (short)31037;
int zero = 0;
int var_20 = 1276376802;
unsigned char var_21 = (unsigned char)179;
short var_22 = (short)-32078;
unsigned char var_23 = (unsigned char)80;
unsigned int var_24 = 1247903004U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
