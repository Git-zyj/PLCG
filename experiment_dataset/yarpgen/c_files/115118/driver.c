#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
short var_4 = (short)22001;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)138;
unsigned char var_9 = (unsigned char)228;
unsigned short var_10 = (unsigned short)37428;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 2728055565U;
unsigned long long int var_14 = 10873808948327793238ULL;
int zero = 0;
unsigned long long int var_18 = 10560608532396265276ULL;
unsigned long long int var_19 = 13846079163083039493ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)106;
unsigned int var_22 = 4286895070U;
int arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
unsigned int arr_4 [24] [24] [24] ;
signed char arr_6 [24] [24] [24] [24] ;
unsigned char arr_7 [24] [24] ;
unsigned int arr_8 [24] ;
_Bool arr_11 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -797599652;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1516760981U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 186837667U : 846882319U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
