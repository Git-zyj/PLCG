#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1703188520136588737LL;
unsigned int var_2 = 3180536075U;
_Bool var_3 = (_Bool)0;
long long int var_4 = 3924744276101640657LL;
long long int var_6 = 8982374989716721790LL;
signed char var_7 = (signed char)102;
long long int var_8 = 1580246191569505959LL;
_Bool var_9 = (_Bool)0;
int var_11 = -1010629626;
signed char var_12 = (signed char)107;
long long int var_13 = -5342984869572769662LL;
unsigned int var_15 = 204759219U;
short var_17 = (short)4995;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6390726292711049557LL;
int zero = 0;
signed char var_20 = (signed char)-10;
long long int var_21 = 6738953159439478452LL;
long long int var_22 = 7221304330021457025LL;
long long int var_23 = 955796951120819928LL;
signed char var_24 = (signed char)59;
signed char var_25 = (signed char)121;
int var_26 = 1066358876;
short var_27 = (short)-30614;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 2911842617394990287ULL;
signed char var_30 = (signed char)-3;
unsigned short var_31 = (unsigned short)42197;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)161;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
long long int var_36 = -6002275660730323183LL;
void init() {
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
