#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
long long int var_1 = 3424361270827496564LL;
unsigned long long int var_2 = 10032107382428243044ULL;
short var_4 = (short)22089;
unsigned long long int var_5 = 14630875561042427532ULL;
unsigned short var_6 = (unsigned short)30399;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-16555;
int zero = 0;
unsigned char var_10 = (unsigned char)81;
unsigned int var_11 = 287289055U;
int var_12 = -1975182775;
unsigned long long int var_13 = 16771829747433253012ULL;
int var_14 = 1541841988;
int var_15 = 1359010329;
unsigned char var_16 = (unsigned char)60;
long long int var_17 = 2789706382621963374LL;
long long int var_18 = 7320819679291562489LL;
int var_19 = 1486107699;
unsigned char var_20 = (unsigned char)74;
unsigned int var_21 = 2361992964U;
signed char var_22 = (signed char)-118;
short arr_0 [14] [14] ;
signed char arr_2 [14] [14] ;
short arr_3 [14] [14] [14] ;
_Bool arr_7 [14] [14] [14] ;
unsigned int arr_9 [14] [14] [14] [14] ;
signed char arr_14 [25] ;
short arr_16 [25] [25] ;
unsigned int arr_5 [14] [14] [14] ;
unsigned long long int arr_12 [14] ;
long long int arr_13 [14] [14] ;
short arr_17 [25] ;
int arr_18 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)3843;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-22371 : (short)-17217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2160957031U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-13357;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2474511025U : 71844376U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 369716861915003842ULL : 15622540037431186379ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -249912371017293169LL : -5891791750154166287LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (short)28479;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = -1907754239;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
