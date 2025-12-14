#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8846;
long long int var_1 = 1269056397537257215LL;
short var_2 = (short)21084;
_Bool var_4 = (_Bool)1;
int var_6 = -1730444192;
int var_8 = 1765683838;
unsigned long long int var_9 = 17120946000586577922ULL;
int zero = 0;
unsigned int var_10 = 506815771U;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int var_13 = 1341156696;
unsigned short var_14 = (unsigned short)32429;
unsigned short var_15 = (unsigned short)55487;
unsigned short arr_0 [19] ;
int arr_1 [19] [19] ;
long long int arr_5 [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned char arr_7 [22] ;
unsigned long long int arr_2 [19] ;
short arr_3 [19] ;
_Bool arr_4 [19] ;
_Bool arr_8 [22] ;
short arr_9 [22] [22] ;
unsigned int arr_10 [22] ;
int arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)44877;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 354544454;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -2197012913829071451LL : 3623746005234866830LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 10078722174854486038ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1319302945300031830ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)13927;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)19021 : (short)-31506;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 997229503U : 1881312978U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -320050161 : 1059233259;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
