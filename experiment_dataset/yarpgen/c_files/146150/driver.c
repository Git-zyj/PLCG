#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned int var_2 = 3847635838U;
signed char var_3 = (signed char)54;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)31;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)-43;
signed char var_13 = (signed char)-109;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2544042171U;
unsigned int var_17 = 2685348696U;
signed char var_18 = (signed char)108;
signed char var_19 = (signed char)-43;
signed char var_20 = (signed char)62;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 998122214U;
signed char arr_0 [16] ;
signed char arr_1 [16] ;
_Bool arr_2 [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
