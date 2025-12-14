#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1256799936U;
signed char var_10 = (signed char)-85;
short var_11 = (short)-16554;
unsigned int var_15 = 4190972429U;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1253391538002202930LL;
unsigned int var_22 = 240746297U;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)11995;
unsigned char var_25 = (unsigned char)107;
signed char var_26 = (signed char)111;
short var_27 = (short)10653;
int var_28 = -1665065329;
short arr_0 [17] ;
unsigned int arr_3 [17] ;
unsigned char arr_6 [17] ;
unsigned short arr_9 [17] ;
signed char arr_14 [17] [17] [17] [17] ;
_Bool arr_4 [17] ;
signed char arr_7 [17] ;
int arr_18 [17] ;
int arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)19274;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2809367092U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)46536;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = -452815402;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = -1272116460;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
