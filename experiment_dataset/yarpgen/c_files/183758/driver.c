#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7269567863341393588LL;
signed char var_1 = (signed char)-2;
unsigned long long int var_2 = 5477972624226966033ULL;
unsigned short var_4 = (unsigned short)17934;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)119;
unsigned int var_8 = 73031189U;
unsigned long long int var_9 = 4824492782703953154ULL;
unsigned long long int var_10 = 16453735343010697654ULL;
short var_11 = (short)-17206;
short var_12 = (short)-28522;
unsigned char var_13 = (unsigned char)55;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-18234;
short var_18 = (short)-13569;
long long int var_19 = 5229312749868154142LL;
int zero = 0;
unsigned char var_20 = (unsigned char)235;
unsigned char var_21 = (unsigned char)13;
unsigned long long int var_22 = 327289690459876331ULL;
_Bool var_23 = (_Bool)1;
unsigned int var_24 = 4138543194U;
unsigned char var_25 = (unsigned char)173;
unsigned char var_26 = (unsigned char)49;
unsigned long long int var_27 = 13738475247962766387ULL;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)86;
unsigned char arr_0 [22] ;
unsigned int arr_9 [10] ;
long long int arr_2 [22] [22] ;
unsigned long long int arr_3 [22] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = 2774758766U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -632755793083471320LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17411255137063597002ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 17506742897086672039ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
