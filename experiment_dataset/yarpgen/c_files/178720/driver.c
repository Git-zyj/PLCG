#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1460981801;
long long int var_4 = -4044792845204837193LL;
short var_6 = (short)-10404;
int var_9 = -2042660469;
int var_10 = 600066108;
long long int var_11 = 2389385650783639993LL;
int var_12 = 1210969768;
int var_15 = -240763742;
signed char var_17 = (signed char)-66;
int zero = 0;
long long int var_20 = -6067783312882497155LL;
unsigned short var_21 = (unsigned short)41902;
short var_22 = (short)31965;
_Bool var_23 = (_Bool)0;
int var_24 = -961684635;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
int var_28 = -1667689729;
_Bool var_29 = (_Bool)0;
int arr_0 [17] ;
int arr_2 [17] [17] ;
long long int arr_4 [17] ;
unsigned long long int arr_5 [17] ;
_Bool arr_7 [17] [17] [17] [17] [17] [17] ;
_Bool arr_8 [17] [17] ;
int arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 595117997;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1758291442;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2617694071474507750LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4361001856968158420ULL : 14037520442424138876ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 427720078 : -210799613;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
