#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6508;
unsigned long long int var_3 = 6440638509815449728ULL;
signed char var_4 = (signed char)60;
unsigned char var_6 = (unsigned char)179;
unsigned long long int var_7 = 14895869330255077155ULL;
int var_8 = -441602439;
unsigned int var_10 = 890480599U;
signed char var_15 = (signed char)80;
int zero = 0;
unsigned int var_18 = 6662267U;
signed char var_19 = (signed char)11;
unsigned short var_20 = (unsigned short)10769;
unsigned int var_21 = 1833144589U;
unsigned int var_22 = 2601945143U;
_Bool arr_0 [16] ;
_Bool arr_4 [16] [16] [16] ;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)92 : (signed char)-69;
}

void checksum() {
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
