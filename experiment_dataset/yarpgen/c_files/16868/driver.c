#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 361726386;
_Bool var_1 = (_Bool)1;
int var_5 = -1792957731;
unsigned long long int var_8 = 7092108570040192912ULL;
int zero = 0;
unsigned int var_12 = 719854902U;
int var_13 = -1839618995;
unsigned long long int var_14 = 3303506638627362339ULL;
signed char var_15 = (signed char)122;
signed char var_16 = (signed char)-115;
unsigned long long int var_17 = 10254148810257673146ULL;
unsigned long long int var_18 = 7631270346571667862ULL;
unsigned int var_19 = 2805065758U;
unsigned int var_20 = 3973322263U;
int var_21 = 568579293;
unsigned long long int var_22 = 1298615076788504754ULL;
unsigned char var_23 = (unsigned char)198;
unsigned char var_24 = (unsigned char)36;
int var_25 = 2052561324;
unsigned long long int arr_2 [14] ;
unsigned short arr_3 [14] ;
signed char arr_4 [14] [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
unsigned long long int arr_9 [14] [14] [14] [14] ;
int arr_10 [14] ;
signed char arr_11 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 419164784788478204ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)4614;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 473485089U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 18071459054889208967ULL : 13993501392248525353ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = -1433143869;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)126;
}

void checksum() {
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
