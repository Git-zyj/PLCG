#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2937888486U;
signed char var_5 = (signed char)-88;
_Bool var_8 = (_Bool)0;
int var_12 = -1810675839;
int zero = 0;
unsigned short var_18 = (unsigned short)22544;
unsigned int var_19 = 655501818U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 938488798U;
unsigned short var_22 = (unsigned short)12236;
unsigned int var_23 = 2865653097U;
unsigned int var_24 = 2409678882U;
unsigned short var_25 = (unsigned short)11582;
int arr_0 [11] ;
signed char arr_1 [11] ;
int arr_2 [11] ;
unsigned int arr_4 [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned long long int arr_6 [11] [11] [11] [11] ;
signed char arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1362796516;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)103 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 549645182 : -308689600;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 3602230514U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 17410850545604565556ULL : 18198155354201606227ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 12833243055475513436ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)93;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
