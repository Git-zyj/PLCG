#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-28622;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)196;
unsigned char var_9 = (unsigned char)50;
short var_10 = (short)-8192;
_Bool var_11 = (_Bool)1;
short var_12 = (short)5971;
unsigned long long int var_14 = 11716233549269598305ULL;
int var_16 = 665836914;
unsigned int var_17 = 3534517901U;
unsigned char var_18 = (unsigned char)70;
short var_19 = (short)-1245;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 8206836510503662403ULL;
unsigned char var_22 = (unsigned char)223;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-22095;
int var_25 = -1981937869;
unsigned char var_26 = (unsigned char)33;
long long int var_27 = 7835247419846891868LL;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 7561149290010796001ULL;
_Bool var_30 = (_Bool)1;
short var_31 = (short)-2854;
_Bool arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
