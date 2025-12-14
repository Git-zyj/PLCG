#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3222306203575013608LL;
long long int var_2 = -316738286576004183LL;
int var_3 = -1312393407;
signed char var_4 = (signed char)-8;
long long int var_5 = 2879486759068455474LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)60;
long long int var_8 = 9128385138546947720LL;
unsigned long long int var_9 = 14386184533631693561ULL;
unsigned long long int var_10 = 5170595880543753924ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)61444;
signed char var_12 = (signed char)-53;
unsigned long long int var_13 = 1685627354091558426ULL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)54003;
long long int var_17 = 94465266851815979LL;
long long int arr_3 [15] [15] ;
unsigned long long int arr_4 [15] ;
long long int arr_5 [15] ;
long long int arr_6 [15] [15] ;
_Bool arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 4180721088378602100LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 6427867195879898742ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 699188657245839275LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -392587936863811250LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
