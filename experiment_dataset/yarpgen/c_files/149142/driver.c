#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1793065282013843374ULL;
unsigned short var_1 = (unsigned short)54393;
unsigned long long int var_2 = 7203858510400853300ULL;
unsigned long long int var_3 = 17432100140528987339ULL;
unsigned int var_4 = 3491317663U;
unsigned int var_5 = 2402990920U;
long long int var_6 = 6299172053389034407LL;
unsigned long long int var_7 = 18320215061865872078ULL;
signed char var_8 = (signed char)-60;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-109;
unsigned int var_12 = 2902736354U;
unsigned long long int var_15 = 12290640994147942630ULL;
signed char var_16 = (signed char)-116;
unsigned char var_19 = (unsigned char)128;
int zero = 0;
long long int var_20 = 6803065327679598755LL;
unsigned int var_21 = 3885071003U;
unsigned short var_22 = (unsigned short)17826;
int var_23 = 593280192;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 12098579353203171204ULL;
short var_26 = (short)-27663;
unsigned long long int var_27 = 4735406508405790408ULL;
signed char var_28 = (signed char)115;
signed char var_29 = (signed char)-61;
unsigned long long int var_30 = 2648583877718877060ULL;
signed char var_31 = (signed char)-77;
short var_32 = (short)23901;
long long int var_33 = -3415041963459085530LL;
unsigned short var_34 = (unsigned short)24428;
unsigned short var_35 = (unsigned short)24774;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)177;
signed char var_38 = (signed char)79;
int var_39 = 2027823909;
short var_40 = (short)31347;
signed char arr_0 [21] ;
long long int arr_2 [21] ;
long long int arr_3 [18] [18] ;
unsigned short arr_4 [18] [18] ;
unsigned char arr_5 [18] ;
short arr_7 [18] [18] [18] ;
unsigned char arr_11 [18] [18] [18] ;
signed char arr_12 [18] [18] ;
_Bool arr_16 [18] [18] [18] ;
_Bool arr_21 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1490156687039229371LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 8854913941524226154LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)3387;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)14386;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
