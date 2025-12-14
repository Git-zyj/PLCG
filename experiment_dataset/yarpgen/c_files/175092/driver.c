#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
int var_2 = 1074583438;
unsigned short var_3 = (unsigned short)5290;
unsigned short var_5 = (unsigned short)64115;
int var_9 = 219865831;
int var_11 = -1875812087;
long long int var_12 = 7744563671179150077LL;
int zero = 0;
signed char var_15 = (signed char)-23;
unsigned char var_16 = (unsigned char)23;
unsigned long long int var_17 = 12828955338691186821ULL;
unsigned int var_18 = 2742207645U;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13112395685237206039ULL;
unsigned long long int var_21 = 3848558584027237358ULL;
unsigned long long int var_22 = 1873971364392744190ULL;
unsigned int var_23 = 522472556U;
unsigned char var_24 = (unsigned char)233;
unsigned int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned long long int arr_7 [19] [19] ;
long long int arr_8 [19] [19] ;
signed char arr_5 [19] ;
signed char arr_10 [19] ;
unsigned char arr_11 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3590693219U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)22278;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 13079500158793484328ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -2576601681711254651LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)249;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
