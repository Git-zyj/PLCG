#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)56103;
unsigned char var_2 = (unsigned char)30;
unsigned char var_3 = (unsigned char)204;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)226;
short var_7 = (short)-14732;
long long int var_8 = -7163012656577255748LL;
unsigned long long int var_9 = 12587130036987148547ULL;
long long int var_10 = 3228526650320748282LL;
unsigned long long int var_11 = 2872381502784249607ULL;
signed char var_13 = (signed char)92;
unsigned long long int var_14 = 437105096521164976ULL;
unsigned int var_15 = 1260719751U;
long long int var_17 = 5773051050513997003LL;
int zero = 0;
unsigned char var_20 = (unsigned char)174;
short var_21 = (short)25767;
unsigned short var_22 = (unsigned short)39021;
unsigned long long int var_23 = 16123458586325215863ULL;
signed char var_24 = (signed char)119;
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
