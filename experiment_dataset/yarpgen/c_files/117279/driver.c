#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)1479;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_6 = 1490890865;
int var_8 = -1080958918;
unsigned int var_9 = 3746959063U;
signed char var_14 = (signed char)50;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 2360396670247286443ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)28837;
signed char var_21 = (signed char)-49;
unsigned long long int var_22 = 15257041714320900920ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)87;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)-34;
unsigned long long int var_27 = 5098839729154055299ULL;
_Bool var_28 = (_Bool)1;
unsigned int arr_0 [18] ;
short arr_1 [18] ;
_Bool arr_2 [18] ;
_Bool arr_3 [18] ;
signed char arr_7 [18] ;
unsigned short arr_13 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2204249750U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-19737;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)43113;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
