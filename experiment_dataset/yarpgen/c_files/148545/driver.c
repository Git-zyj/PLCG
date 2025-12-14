#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
short var_1 = (short)-27260;
unsigned int var_3 = 1762033022U;
unsigned char var_4 = (unsigned char)161;
unsigned char var_5 = (unsigned char)217;
_Bool var_6 = (_Bool)0;
short var_10 = (short)15510;
signed char var_13 = (signed char)-10;
unsigned int var_14 = 1361478089U;
unsigned long long int var_15 = 15120298736735481746ULL;
unsigned int var_19 = 3206310164U;
int zero = 0;
int var_20 = -1526509472;
int var_21 = -1676898105;
unsigned short var_22 = (unsigned short)1040;
unsigned int var_23 = 4154583319U;
unsigned long long int var_24 = 4472084665849800377ULL;
unsigned short var_25 = (unsigned short)38733;
unsigned int var_26 = 3119050372U;
long long int var_27 = 6777633860283635521LL;
long long int var_28 = -2941611986580013748LL;
unsigned char arr_0 [13] ;
long long int arr_2 [13] ;
_Bool arr_5 [13] [13] ;
int arr_8 [13] [13] ;
unsigned short arr_9 [13] [13] ;
unsigned char arr_10 [13] ;
int arr_11 [13] [13] [13] ;
signed char arr_16 [17] ;
signed char arr_17 [17] [17] ;
signed char arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
_Bool arr_13 [13] ;
unsigned short arr_14 [13] ;
unsigned short arr_18 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -5782163634435961673LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 1319579012;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)5671;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1655873283;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 123355853U : 3890780646U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63903 : (unsigned short)60034;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned short)13763;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
