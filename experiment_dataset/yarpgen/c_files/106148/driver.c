#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10268;
int var_1 = 1237145439;
unsigned int var_2 = 1775785023U;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-25806;
long long int var_5 = -2593127830661202987LL;
int var_6 = -1210575113;
signed char var_7 = (signed char)-16;
unsigned long long int var_8 = 10363860616868164664ULL;
unsigned long long int var_10 = 13711449193029239270ULL;
unsigned int var_11 = 1108631081U;
long long int var_12 = -6294854569500954385LL;
int zero = 0;
unsigned short var_13 = (unsigned short)47576;
_Bool var_14 = (_Bool)0;
long long int var_15 = -5367647476105284570LL;
unsigned short var_16 = (unsigned short)52137;
short var_17 = (short)8411;
signed char var_18 = (signed char)-21;
long long int var_19 = 1592841505051111208LL;
unsigned int var_20 = 3421891502U;
unsigned int var_21 = 181264906U;
_Bool arr_2 [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] [14] [14] ;
int arr_11 [17] ;
unsigned int arr_14 [17] [17] ;
int arr_18 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17437207086692428097ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 994426386;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 299897869U : 1198775274U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 241865792 : 1676445820;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
