#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13288;
unsigned char var_1 = (unsigned char)61;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12278280400969918105ULL;
unsigned long long int var_4 = 13070812574332841370ULL;
unsigned long long int var_5 = 2871408395625410336ULL;
unsigned int var_6 = 2007497755U;
signed char var_8 = (signed char)0;
unsigned long long int var_9 = 13509897028650719348ULL;
unsigned short var_10 = (unsigned short)19313;
unsigned short var_11 = (unsigned short)35545;
long long int var_12 = -2678148510719066242LL;
short var_13 = (short)14947;
signed char var_14 = (signed char)10;
unsigned long long int var_15 = 9499228300126202142ULL;
int zero = 0;
unsigned int var_16 = 2517559076U;
long long int arr_7 [25] ;
unsigned long long int arr_8 [25] [25] [25] ;
unsigned short arr_9 [25] [25] ;
int arr_14 [23] ;
unsigned long long int arr_15 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -2729335681742074582LL : -8678024433794019723LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12005252485913474573ULL : 9162370586642217233ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)65533 : (unsigned short)18434;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = -1775921546;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = 1752076703418626598ULL;
}

void checksum() {
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
