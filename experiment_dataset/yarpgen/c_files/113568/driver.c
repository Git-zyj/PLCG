#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)147;
unsigned int var_3 = 3247557702U;
long long int var_4 = 8066407715406650784LL;
unsigned long long int var_5 = 6937720876420406090ULL;
unsigned int var_6 = 3796742309U;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)69;
long long int var_11 = -7011286712603704243LL;
int zero = 0;
unsigned short var_13 = (unsigned short)52282;
unsigned short var_14 = (unsigned short)45987;
void init() {
}

void checksum() {
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
