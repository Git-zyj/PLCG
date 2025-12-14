#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24141;
unsigned long long int var_1 = 16631523878188717650ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 14816602084564394646ULL;
unsigned int var_4 = 3881927744U;
unsigned char var_5 = (unsigned char)118;
unsigned long long int var_9 = 8015242372450873002ULL;
long long int var_10 = -2213910835611006101LL;
unsigned short var_11 = (unsigned short)53933;
int var_12 = -1332383507;
unsigned int var_13 = 3755250738U;
unsigned char var_14 = (unsigned char)219;
unsigned short var_15 = (unsigned short)39858;
unsigned int var_17 = 325573109U;
int zero = 0;
long long int var_18 = -5667487691508681358LL;
unsigned int var_19 = 103513690U;
unsigned int var_20 = 2707719810U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16855363549597288477ULL;
long long int var_23 = -8434324092263759315LL;
unsigned long long int var_24 = 289299701309581450ULL;
unsigned short var_25 = (unsigned short)23164;
unsigned int var_26 = 2700048774U;
long long int var_27 = -5800755701154031047LL;
int var_28 = 558749032;
unsigned char var_29 = (unsigned char)160;
unsigned char arr_0 [10] ;
short arr_1 [10] ;
unsigned int arr_5 [10] ;
unsigned long long int arr_9 [11] ;
unsigned int arr_10 [11] ;
unsigned long long int arr_13 [21] [21] ;
unsigned long long int arr_14 [21] [21] ;
int arr_15 [21] ;
short arr_18 [24] [24] ;
unsigned long long int arr_19 [24] [24] ;
unsigned short arr_20 [24] ;
unsigned long long int arr_22 [24] [24] [24] ;
unsigned int arr_28 [24] [24] [24] ;
unsigned long long int arr_31 [24] [24] ;
unsigned long long int arr_2 [10] ;
unsigned long long int arr_3 [10] ;
unsigned long long int arr_6 [10] ;
int arr_7 [10] ;
unsigned long long int arr_12 [11] ;
unsigned short arr_16 [21] ;
int arr_17 [21] ;
unsigned short arr_24 [24] [24] ;
signed char arr_25 [24] ;
signed char arr_26 [24] [24] ;
unsigned long long int arr_29 [24] ;
signed char arr_30 [24] [24] ;
unsigned short arr_34 [24] [24] ;
unsigned short arr_35 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-22074;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 877130283U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 11238306516994467203ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = 2690394879U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 3365882902484016011ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = 8500368355583785373ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 752870169;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (short)16347;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_19 [i_0] [i_1] = 5304499778756230751ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_20 [i_0] = (unsigned short)57601;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 11795124283488570887ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 212822707U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = 276701528848999721ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 17183330749773301704ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 15362701017415051046ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 17874994348381502102ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 1588292141;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 11641207675098152962ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (unsigned short)35257;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 1104469210;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)7770;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 9472512352602851016ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_30 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned short)60134;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (unsigned short)39101;
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
