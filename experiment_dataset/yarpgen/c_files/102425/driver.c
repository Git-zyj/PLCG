#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-45;
unsigned short var_4 = (unsigned short)38334;
long long int var_5 = -6032291102162849196LL;
unsigned long long int var_9 = 12512653755521526052ULL;
signed char var_11 = (signed char)-84;
unsigned long long int var_12 = 17255643612463171009ULL;
long long int var_13 = 1019445251723430491LL;
unsigned char var_14 = (unsigned char)241;
unsigned short var_16 = (unsigned short)60053;
int zero = 0;
unsigned char var_17 = (unsigned char)203;
unsigned long long int var_18 = 513174400759941767ULL;
unsigned short var_19 = (unsigned short)28549;
unsigned long long int var_20 = 17217260060807352365ULL;
unsigned char var_21 = (unsigned char)178;
int var_22 = 32817396;
unsigned char var_23 = (unsigned char)31;
unsigned long long int var_24 = 497981640323788611ULL;
unsigned long long int var_25 = 12041351347805091049ULL;
_Bool var_26 = (_Bool)0;
long long int var_27 = 3092744666321007640LL;
unsigned short var_28 = (unsigned short)40671;
unsigned short arr_0 [19] [19] ;
unsigned short arr_1 [19] [19] ;
long long int arr_2 [19] ;
_Bool arr_6 [19] [19] ;
int arr_7 [19] [19] ;
unsigned int arr_10 [24] ;
unsigned long long int arr_11 [24] ;
long long int arr_14 [25] [25] ;
int arr_15 [25] [25] ;
unsigned short arr_17 [25] ;
unsigned long long int arr_4 [19] ;
signed char arr_8 [19] ;
unsigned short arr_9 [19] [19] ;
unsigned long long int arr_20 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)36122;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)12792;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -3695730624456042576LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = -607143580;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 65699920U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 13384064676331723990ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = -6625652818714101845LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 1634999239;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned short)64296;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1407732918312765620ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (signed char)-67;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)34041;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 4425553445977088556ULL;
}

void checksum() {
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
