#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12366;
short var_1 = (short)-4649;
unsigned long long int var_2 = 1586933288883027714ULL;
short var_4 = (short)-21794;
signed char var_5 = (signed char)84;
unsigned long long int var_7 = 8795014877313786620ULL;
int var_11 = 1055493970;
unsigned short var_12 = (unsigned short)6306;
unsigned short var_14 = (unsigned short)58496;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 4270651050307810167ULL;
int var_18 = -165531330;
signed char var_19 = (signed char)-102;
long long int var_20 = -5959624161921851943LL;
long long int var_21 = 4715286086546287770LL;
unsigned long long int var_22 = 449017213644905857ULL;
unsigned int var_23 = 1238219831U;
_Bool var_24 = (_Bool)1;
int var_25 = 1029947874;
unsigned short var_26 = (unsigned short)29092;
int var_27 = -153403113;
short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_6 [17] ;
signed char arr_7 [17] ;
_Bool arr_8 [17] ;
short arr_9 [21] ;
int arr_10 [21] [21] ;
int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)4276;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7326923765675669247ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 4262502223U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (short)-4647;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -713125895 : -365455338;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 1992957482;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
