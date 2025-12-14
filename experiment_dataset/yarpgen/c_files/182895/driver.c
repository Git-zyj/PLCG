#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2002724212712715298LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -9040550248405863954LL;
long long int var_5 = 7838728633354554085LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -4273386210222290133LL;
unsigned long long int var_8 = 15388145508980774653ULL;
signed char var_9 = (signed char)-53;
short var_11 = (short)-14360;
unsigned char var_12 = (unsigned char)200;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5705794014329898090LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)56495;
long long int var_18 = -4061625482384880546LL;
unsigned int var_19 = 1481458110U;
unsigned short var_20 = (unsigned short)53186;
long long int arr_2 [14] [14] [14] ;
unsigned short arr_6 [14] ;
_Bool arr_7 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -5968556677816118848LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)5029;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
