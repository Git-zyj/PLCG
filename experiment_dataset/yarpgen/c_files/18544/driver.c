#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13697167898756174131ULL;
unsigned int var_3 = 2236773609U;
int var_7 = 1731019588;
unsigned int var_9 = 1773837665U;
unsigned int var_11 = 404330140U;
int var_12 = -152850717;
int var_15 = 1269416869;
long long int var_16 = -6229987649963757562LL;
int zero = 0;
signed char var_18 = (signed char)-9;
unsigned long long int var_19 = 9761758369493050393ULL;
unsigned short var_20 = (unsigned short)20414;
signed char var_21 = (signed char)-123;
unsigned int var_22 = 1294461822U;
unsigned int var_23 = 2887041841U;
unsigned int var_24 = 2435882406U;
unsigned short var_25 = (unsigned short)14130;
unsigned long long int var_26 = 9514372494886915936ULL;
int var_27 = 1936328100;
long long int var_28 = 443537404476779423LL;
unsigned short arr_0 [12] [12] ;
unsigned short arr_1 [12] [12] ;
long long int arr_2 [12] [12] ;
unsigned int arr_3 [12] ;
signed char arr_4 [12] [12] ;
signed char arr_9 [25] ;
unsigned int arr_10 [25] [25] ;
unsigned short arr_11 [25] ;
unsigned short arr_12 [25] ;
int arr_13 [25] ;
_Bool arr_14 [25] ;
unsigned int arr_18 [25] ;
unsigned int arr_7 [12] [12] [12] ;
unsigned int arr_8 [12] [12] [12] [12] ;
unsigned short arr_19 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)2944;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10134;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -4297045766389498091LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4107720955U : 3492963291U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 2874438308U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned short)13357;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned short)45691;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 1979842353;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3892808103U : 851923192U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1068605885U : 1923853150U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1567145525U : 2936584798U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33317 : (unsigned short)16106;
}

void checksum() {
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
