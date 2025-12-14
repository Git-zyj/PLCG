#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2169325943284445424LL;
long long int var_7 = -4271255341018032096LL;
signed char var_8 = (signed char)-1;
long long int var_9 = 4450124085757053923LL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1788936424U;
unsigned long long int var_18 = 5252282502578703564ULL;
short var_19 = (short)14436;
int zero = 0;
unsigned short var_20 = (unsigned short)60204;
int var_21 = 1887613208;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
