#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
int var_1 = -1032735862;
int var_2 = -2107234679;
unsigned int var_3 = 2333304464U;
short var_6 = (short)17909;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -1211504678;
short var_12 = (short)12748;
int var_13 = -1391516092;
short var_14 = (short)-2881;
unsigned char var_15 = (unsigned char)26;
unsigned long long int var_16 = 3342683499297720713ULL;
long long int var_17 = -1757517629185363721LL;
short var_18 = (short)28460;
int var_19 = -260348263;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)54;
long long int arr_6 [24] ;
long long int arr_8 [24] ;
long long int arr_10 [20] ;
unsigned char arr_12 [14] ;
_Bool arr_13 [14] [14] ;
_Bool arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 7663810181773367311LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -7211019325570451776LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -1834924486912024752LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
