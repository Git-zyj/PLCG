#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-54;
signed char var_4 = (signed char)5;
unsigned long long int var_6 = 4480264687069717898ULL;
unsigned char var_7 = (unsigned char)216;
unsigned int var_8 = 427661338U;
signed char var_10 = (signed char)0;
signed char var_11 = (signed char)-91;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5538049987729796422ULL;
long long int var_16 = 777658020804152760LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 468618652;
unsigned long long int var_19 = 9860177071872178348ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-98;
int var_22 = -593090017;
short var_23 = (short)14580;
unsigned short var_24 = (unsigned short)1372;
unsigned long long int arr_0 [14] [14] ;
unsigned long long int arr_1 [14] ;
_Bool arr_7 [19] ;
long long int arr_8 [19] ;
long long int arr_9 [19] ;
unsigned long long int arr_10 [19] ;
_Bool arr_11 [19] ;
unsigned long long int arr_2 [14] ;
signed char arr_12 [19] ;
unsigned char arr_13 [19] [19] [19] ;
signed char arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 12230399475939135837ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 18000013528578011355ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -6389554758086372033LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -2961022692157659573LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 6540340447709511698ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 16042800008725284411ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (signed char)106;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
