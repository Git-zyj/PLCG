#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11771416727641131972ULL;
unsigned int var_1 = 2401776184U;
unsigned short var_2 = (unsigned short)41556;
long long int var_3 = 995986901359681660LL;
signed char var_5 = (signed char)76;
int var_6 = 1019050474;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)165;
unsigned char var_9 = (unsigned char)197;
unsigned int var_11 = 3781864981U;
signed char var_12 = (signed char)94;
unsigned char var_13 = (unsigned char)41;
int zero = 0;
int var_14 = 1978293893;
int var_15 = -1764463547;
long long int var_16 = 6700362928283391181LL;
int var_17 = -1629747527;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)70;
int var_21 = 433692031;
int var_22 = -1528490124;
long long int var_23 = -8308131528994519618LL;
signed char var_24 = (signed char)113;
unsigned short arr_0 [11] ;
int arr_1 [11] [11] ;
signed char arr_3 [22] [22] ;
int arr_4 [22] [22] ;
unsigned long long int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)7907;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = -1512799145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -826625447;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 9909996226554234508ULL;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
