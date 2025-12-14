#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2068837891U;
unsigned int var_1 = 3104673145U;
long long int var_2 = -1262621629287649467LL;
unsigned int var_3 = 1396954226U;
signed char var_4 = (signed char)-58;
signed char var_5 = (signed char)11;
unsigned int var_6 = 2233811538U;
signed char var_7 = (signed char)-54;
short var_8 = (short)-28662;
unsigned int var_10 = 2778131598U;
unsigned long long int var_11 = 8661547417592627361ULL;
short var_13 = (short)8082;
unsigned char var_14 = (unsigned char)139;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 596925385U;
int var_17 = 449307294;
signed char var_18 = (signed char)-29;
int zero = 0;
unsigned char var_19 = (unsigned char)149;
long long int var_20 = -3690754060940517322LL;
unsigned int var_21 = 715196465U;
int var_22 = -1751702080;
signed char var_23 = (signed char)-23;
short var_24 = (short)-27923;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3082399271U;
_Bool var_27 = (_Bool)1;
long long int var_28 = -4335424705286164085LL;
unsigned int var_29 = 1310306074U;
long long int var_30 = 6037252440046415507LL;
unsigned long long int var_31 = 17918755762596619290ULL;
long long int var_32 = 3266830527685935672LL;
long long int var_33 = 9075337859509152853LL;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)-6;
unsigned short var_36 = (unsigned short)30930;
short var_37 = (short)21808;
unsigned int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned short arr_4 [25] ;
long long int arr_5 [25] [25] ;
unsigned int arr_6 [25] [25] ;
unsigned char arr_9 [25] ;
_Bool arr_10 [25] ;
unsigned int arr_12 [25] [25] ;
unsigned int arr_19 [25] [25] [25] ;
long long int arr_7 [25] [25] [25] ;
long long int arr_11 [25] [25] ;
unsigned long long int arr_16 [25] ;
unsigned int arr_17 [25] ;
unsigned long long int arr_18 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 912819006U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 5156273010747536079ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)12055;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 4491950132657528082LL : 8963978809211200817LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 19581825U : 1325491400U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)158 : (unsigned char)252;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = 663392713U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 2139991465U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -9055313715316133371LL : 6844634749639677162LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -3872831863323805873LL : 8270915509614608602LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 7048334577062204821ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 3648132077U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 12604885579926680492ULL;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
