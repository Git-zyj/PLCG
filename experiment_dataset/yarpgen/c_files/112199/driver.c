#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -993426851;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)16883;
signed char var_7 = (signed char)-66;
short var_10 = (short)-28671;
short var_12 = (short)10746;
_Bool var_13 = (_Bool)1;
long long int var_14 = -4300306324841796512LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 7649384258079429729ULL;
unsigned short var_18 = (unsigned short)52834;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)39;
unsigned int var_21 = 2564673382U;
unsigned short var_22 = (unsigned short)26254;
_Bool var_23 = (_Bool)0;
short var_24 = (short)11035;
unsigned long long int var_25 = 4984619581340366157ULL;
signed char var_26 = (signed char)-122;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)102;
long long int var_29 = -3455253938485099171LL;
unsigned int var_30 = 3824670238U;
unsigned short var_31 = (unsigned short)9119;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
