#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)28295;
unsigned short var_5 = (unsigned short)37318;
unsigned short var_6 = (unsigned short)28007;
unsigned char var_9 = (unsigned char)97;
unsigned long long int var_13 = 6311267490519244704ULL;
signed char var_14 = (signed char)46;
long long int var_15 = 4413847729534564861LL;
short var_18 = (short)-21789;
int zero = 0;
unsigned long long int var_20 = 13702320107652509206ULL;
int var_21 = -312575661;
unsigned long long int var_22 = 13991770911901957623ULL;
unsigned int var_23 = 2225386864U;
int var_24 = -900240641;
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
