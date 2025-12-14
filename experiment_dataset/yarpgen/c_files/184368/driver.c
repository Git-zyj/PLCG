#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned long long int var_1 = 11145750965984348532ULL;
signed char var_4 = (signed char)-113;
long long int var_6 = 6421245506029513610LL;
long long int var_8 = -4184383981167224595LL;
short var_9 = (short)31905;
signed char var_10 = (signed char)122;
int zero = 0;
unsigned char var_13 = (unsigned char)16;
unsigned long long int var_14 = 12220736781699437252ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-14931;
unsigned long long int var_17 = 1913185701781931071ULL;
short var_18 = (short)-23846;
short var_19 = (short)4098;
signed char var_20 = (signed char)-13;
short var_21 = (short)15424;
unsigned long long int var_22 = 5120220479832023267ULL;
signed char var_23 = (signed char)-121;
long long int var_24 = -5276303566600682787LL;
long long int var_25 = -344172263605090450LL;
unsigned long long int var_26 = 16143219586616706280ULL;
unsigned short var_27 = (unsigned short)57019;
signed char arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
int arr_7 [11] ;
signed char arr_14 [11] [11] [11] [11] ;
long long int arr_20 [16] [16] ;
short arr_21 [16] ;
_Bool arr_22 [16] ;
int arr_8 [11] [11] [11] ;
long long int arr_16 [11] [11] [11] [11] ;
int arr_19 [13] ;
int arr_23 [16] ;
signed char arr_24 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)33430;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -1907969640;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = 2835242797959218138LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)2242 : (short)-12430;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -2012516424;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -6767670467527472417LL : -4348425035684395778LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 421757861 : -2106072877;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? -1817413376 : -1621496507;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)62;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
