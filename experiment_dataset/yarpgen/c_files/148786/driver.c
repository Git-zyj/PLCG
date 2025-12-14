#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 174144617U;
unsigned long long int var_5 = 15485751883478829655ULL;
unsigned long long int var_6 = 12150479044320412566ULL;
signed char var_7 = (signed char)-2;
short var_8 = (short)14969;
short var_9 = (short)18895;
int var_12 = -537014808;
long long int var_15 = 8709770359847307453LL;
int zero = 0;
unsigned long long int var_19 = 15267556828552405900ULL;
int var_20 = -448771307;
unsigned long long int var_21 = 7486487811852218062ULL;
unsigned int var_22 = 2871562723U;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2924114801U;
int var_25 = 2045414999;
unsigned long long int var_26 = 3751344518443690912ULL;
unsigned char var_27 = (unsigned char)46;
int var_28 = 2110087212;
_Bool var_29 = (_Bool)0;
long long int var_30 = -5218299326818907861LL;
int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
int arr_3 [19] [19] ;
unsigned long long int arr_6 [19] ;
short arr_7 [19] ;
unsigned char arr_8 [19] [19] [19] [19] ;
int arr_17 [19] ;
_Bool arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -530355595;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 17280209165503560644ULL : 17768992169001059400ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 323024169 : 1770316049;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 7928516668858126489ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)11714 : (short)-29514;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? -1288458703 : 1102995601;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
