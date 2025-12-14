#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15382934655268395753ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)45584;
unsigned char var_4 = (unsigned char)19;
short var_5 = (short)-11215;
unsigned int var_7 = 727667163U;
signed char var_9 = (signed char)-58;
signed char var_11 = (signed char)-119;
unsigned short var_13 = (unsigned short)64953;
int zero = 0;
signed char var_14 = (signed char)39;
unsigned char var_15 = (unsigned char)32;
long long int var_16 = -2447652534963373900LL;
int var_17 = -536900878;
unsigned char var_18 = (unsigned char)94;
int var_19 = 1620986359;
unsigned long long int var_20 = 7992824611734396049ULL;
unsigned short var_21 = (unsigned short)33018;
unsigned long long int var_22 = 4064438170503679507ULL;
unsigned short var_23 = (unsigned short)58167;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned char arr_2 [18] [18] ;
unsigned long long int arr_3 [18] ;
long long int arr_4 [18] [18] [18] ;
unsigned char arr_7 [20] [20] ;
unsigned long long int arr_8 [20] [20] ;
signed char arr_9 [20] [20] ;
unsigned long long int arr_5 [18] [18] [18] ;
short arr_11 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 15329375485604455932ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 10900346751594963145ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)109 : (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 663397349639135432ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4012629329813948633LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 5882512004895417958ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2163100781174712687ULL : 18172812879105745437ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)19493 : (short)14079;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
