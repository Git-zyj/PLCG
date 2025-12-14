#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2054581449;
unsigned long long int var_1 = 6451717665249865456ULL;
signed char var_5 = (signed char)20;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)7786;
_Bool var_14 = (_Bool)1;
unsigned short var_17 = (unsigned short)26260;
int zero = 0;
signed char var_19 = (signed char)-38;
long long int var_20 = 4356008357224109454LL;
unsigned int var_21 = 1422298260U;
signed char var_22 = (signed char)-84;
unsigned short var_23 = (unsigned short)1151;
unsigned int var_24 = 1980437733U;
int var_25 = -892431163;
_Bool arr_0 [11] ;
signed char arr_1 [11] [11] ;
long long int arr_3 [21] ;
long long int arr_4 [21] [21] ;
unsigned char arr_2 [11] ;
unsigned short arr_5 [21] ;
_Bool arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1127489286850852941LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -8674892888293123926LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)61069;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
