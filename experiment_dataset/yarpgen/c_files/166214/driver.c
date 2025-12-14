#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8162864506557801646ULL;
unsigned long long int var_4 = 10984195379005195056ULL;
unsigned short var_6 = (unsigned short)1580;
unsigned long long int var_10 = 12066258328936441705ULL;
signed char var_13 = (signed char)-88;
unsigned long long int var_14 = 692870257335030133ULL;
int zero = 0;
unsigned long long int var_16 = 6970606107520283377ULL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15638586251390766722ULL;
int var_19 = -255828161;
unsigned short var_20 = (unsigned short)12671;
unsigned long long int var_21 = 9412041590865111166ULL;
unsigned int var_22 = 3660560826U;
unsigned long long int var_23 = 3883978818221302215ULL;
signed char var_24 = (signed char)61;
unsigned long long int var_25 = 5436993723168042364ULL;
unsigned long long int var_26 = 2535538623267180764ULL;
unsigned int arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_5 [16] ;
signed char arr_8 [14] ;
signed char arr_9 [14] ;
unsigned long long int arr_10 [14] [14] [14] ;
unsigned int arr_12 [14] [14] [14] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_15 [11] ;
unsigned long long int arr_16 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 882161257U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 15290984358242978519ULL : 17755596433131855226ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)-62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4460941580763043526ULL : 14393514647714243119ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 637603608U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3995887540208041248ULL : 6390885076289476132ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 12897266561395423417ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = 2579340917839658591ULL;
}

void checksum() {
    hash(&seed, var_16);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
