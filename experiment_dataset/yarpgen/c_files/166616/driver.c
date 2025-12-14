#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39754;
unsigned short var_2 = (unsigned short)48976;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)4257;
long long int var_7 = -1893526345531761179LL;
long long int var_8 = -7511270913272201640LL;
long long int var_9 = -4043176639704779846LL;
unsigned short var_11 = (unsigned short)37384;
int var_13 = -418294714;
unsigned short var_14 = (unsigned short)2940;
short var_15 = (short)20801;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 415997584U;
long long int var_19 = -1638550248705263119LL;
unsigned short var_20 = (unsigned short)65014;
void init() {
}

void checksum() {
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
