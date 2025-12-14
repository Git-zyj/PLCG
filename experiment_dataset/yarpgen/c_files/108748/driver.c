#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13101462279074488408ULL;
unsigned int var_1 = 317283356U;
unsigned int var_3 = 768083199U;
int var_4 = 123252926;
int var_5 = 2029664350;
unsigned long long int var_6 = 4089971641742981732ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)54849;
short var_13 = (short)11144;
unsigned int var_15 = 211518410U;
int var_16 = -894835120;
int var_18 = 1872966219;
int zero = 0;
unsigned int var_19 = 1523696979U;
unsigned long long int var_20 = 9208227072411524811ULL;
unsigned int var_21 = 25065811U;
signed char var_22 = (signed char)51;
_Bool var_23 = (_Bool)0;
unsigned short arr_7 [17] ;
short arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)7851;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-8049;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
