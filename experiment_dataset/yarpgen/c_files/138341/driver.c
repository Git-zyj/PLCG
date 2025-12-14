#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-36;
unsigned long long int var_4 = 5137236829643417177ULL;
long long int var_5 = -2515442786156896442LL;
long long int var_7 = -397052193623634009LL;
unsigned long long int var_11 = 12638007785847039791ULL;
unsigned long long int var_12 = 13362081492617628018ULL;
signed char var_13 = (signed char)-104;
unsigned short var_15 = (unsigned short)47008;
int zero = 0;
unsigned long long int var_16 = 3510180554977044329ULL;
long long int var_17 = -8715946051395839162LL;
unsigned char var_18 = (unsigned char)127;
unsigned int var_19 = 1794134688U;
unsigned int var_20 = 3293986819U;
signed char var_21 = (signed char)-21;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-22;
int var_24 = -308956493;
unsigned short var_25 = (unsigned short)34568;
unsigned long long int var_26 = 5547622114519782232ULL;
unsigned int var_27 = 3525787520U;
unsigned long long int var_28 = 5265727385931076473ULL;
signed char arr_1 [24] ;
int arr_2 [24] ;
unsigned char arr_5 [24] ;
unsigned int arr_8 [24] [24] [24] [24] ;
unsigned char arr_9 [24] [24] ;
unsigned long long int arr_13 [19] [19] ;
short arr_4 [24] ;
_Bool arr_7 [24] ;
unsigned long long int arr_10 [24] ;
short arr_14 [19] [19] ;
unsigned long long int arr_15 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -252137356;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3428316881U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 9472345834930188476ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-14099;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 4064474711416124219ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-26523;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 18101827593835188093ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
