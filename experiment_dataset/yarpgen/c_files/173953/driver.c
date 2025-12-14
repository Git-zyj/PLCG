#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3810303073U;
unsigned char var_1 = (unsigned char)194;
long long int var_2 = -6940539639575174669LL;
long long int var_6 = -7324980475838087959LL;
short var_8 = (short)-18368;
_Bool var_10 = (_Bool)0;
int var_11 = -88963331;
unsigned char var_12 = (unsigned char)209;
long long int var_13 = -8866241753486969207LL;
short var_14 = (short)30770;
signed char var_15 = (signed char)97;
int zero = 0;
long long int var_17 = 8923306329341522843LL;
signed char var_18 = (signed char)22;
int var_19 = -987963691;
signed char var_20 = (signed char)-8;
short var_21 = (short)-6868;
_Bool var_22 = (_Bool)0;
long long int arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
long long int arr_2 [20] ;
unsigned char arr_4 [13] [13] ;
unsigned short arr_5 [13] ;
int arr_3 [20] ;
int arr_6 [13] [13] ;
unsigned int arr_7 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 978115468563835347LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)7334;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 8505750168110755533LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)15840;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -1156422779;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = -1148954987;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = 2197561669U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
