#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1260430259;
unsigned long long int var_3 = 13228872847563613441ULL;
unsigned char var_4 = (unsigned char)47;
unsigned int var_6 = 2532790745U;
int var_8 = 1140056050;
unsigned char var_9 = (unsigned char)180;
long long int var_10 = -7446008189734917583LL;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 3158732446U;
long long int var_16 = -5105209716658615077LL;
unsigned char var_17 = (unsigned char)206;
int zero = 0;
unsigned long long int var_19 = 14186897074763533543ULL;
signed char var_20 = (signed char)-1;
unsigned long long int var_21 = 9202493285170865700ULL;
unsigned long long int var_22 = 4366453672617504303ULL;
long long int var_23 = -4354674924437858139LL;
int var_24 = -535620547;
unsigned char var_25 = (unsigned char)74;
unsigned long long int var_26 = 14040740225593114753ULL;
int var_27 = -132377329;
unsigned long long int var_28 = 14284341989182312277ULL;
unsigned long long int var_29 = 7083727899973843780ULL;
unsigned long long int var_30 = 5836288763331794190ULL;
signed char var_31 = (signed char)71;
_Bool arr_0 [13] [13] ;
int arr_1 [13] [13] ;
unsigned char arr_2 [13] ;
_Bool arr_4 [13] [13] [13] ;
unsigned char arr_5 [13] [13] ;
signed char arr_11 [13] ;
long long int arr_13 [21] ;
unsigned char arr_15 [21] ;
int arr_16 [21] ;
unsigned char arr_19 [21] ;
unsigned char arr_21 [21] ;
unsigned char arr_6 [13] ;
unsigned char arr_9 [13] ;
unsigned long long int arr_12 [13] ;
_Bool arr_17 [21] ;
unsigned char arr_20 [21] ;
int arr_23 [21] [21] [21] ;
unsigned char arr_24 [21] ;
int arr_27 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 1140753787;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3294923333905415557LL : -5298401612777045832LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 903275645 : -661725711;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_19 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)28 : (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 9374108428038744310ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -397136045 : -502912702;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -961816511 : -579418585;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
