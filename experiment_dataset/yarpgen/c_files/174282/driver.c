#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1596584909U;
unsigned int var_2 = 1665603731U;
unsigned int var_4 = 653766199U;
int var_7 = -1167611833;
long long int var_13 = -5097702033163020223LL;
unsigned long long int var_14 = 11899872496428758768ULL;
short var_15 = (short)-32724;
signed char var_18 = (signed char)68;
unsigned long long int var_19 = 9043101968619045461ULL;
int zero = 0;
unsigned int var_20 = 2066548706U;
unsigned long long int var_21 = 5916014989323872094ULL;
int var_22 = -2045562958;
signed char var_23 = (signed char)61;
unsigned long long int var_24 = 2625110709574191701ULL;
short var_25 = (short)-27282;
unsigned short var_26 = (unsigned short)29747;
long long int var_27 = 5389818341951072742LL;
unsigned int var_28 = 1944267572U;
unsigned int arr_2 [14] ;
unsigned int arr_3 [23] ;
long long int arr_6 [23] [23] ;
signed char arr_7 [23] [23] [23] ;
_Bool arr_9 [23] [23] [23] [23] ;
unsigned short arr_20 [13] ;
_Bool arr_21 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 1623853567U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2768696121U : 3243194763U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -4063455331866172714LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (unsigned short)21709;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)1;
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
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
