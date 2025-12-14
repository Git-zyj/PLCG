#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30617;
_Bool var_1 = (_Bool)1;
long long int var_2 = -7049312282065063608LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-8664;
signed char var_5 = (signed char)-87;
short var_6 = (short)21598;
long long int var_7 = -1012154463723538569LL;
long long int var_8 = -1833851456082309802LL;
long long int var_9 = 1470144997837063313LL;
unsigned int var_10 = 1956736340U;
int zero = 0;
short var_12 = (short)16033;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)56;
unsigned long long int var_15 = 6236085381118834419ULL;
unsigned char var_16 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
