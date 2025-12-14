#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4065697689U;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)207;
unsigned int var_9 = 4099877221U;
unsigned short var_11 = (unsigned short)22672;
unsigned short var_13 = (unsigned short)8550;
int var_14 = 1849017917;
unsigned int var_15 = 3538163055U;
int zero = 0;
unsigned int var_16 = 1917900881U;
long long int var_17 = 6523251693325344417LL;
unsigned short var_18 = (unsigned short)10138;
int var_19 = -1193360895;
unsigned short var_20 = (unsigned short)41360;
unsigned short var_21 = (unsigned short)46545;
unsigned char var_22 = (unsigned char)126;
int var_23 = 1378784352;
unsigned short var_24 = (unsigned short)41920;
_Bool arr_0 [19] [19] ;
signed char arr_1 [19] [19] ;
signed char arr_2 [19] [19] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_8 [19] [19] [19] [19] [19] [19] ;
long long int arr_9 [19] [19] [19] [19] ;
unsigned short arr_15 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-102 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16944526675726844159ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -7649859812982363024LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (unsigned short)44585;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
