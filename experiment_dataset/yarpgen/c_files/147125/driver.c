#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2128126867U;
unsigned int var_1 = 3391454061U;
int var_3 = -1284647934;
signed char var_4 = (signed char)-2;
signed char var_5 = (signed char)20;
unsigned int var_6 = 2154080223U;
signed char var_7 = (signed char)-117;
int var_8 = -1833788324;
signed char var_9 = (signed char)-51;
unsigned char var_11 = (unsigned char)162;
unsigned int var_12 = 628022185U;
signed char var_13 = (signed char)-44;
int var_14 = -1618140656;
int zero = 0;
unsigned int var_15 = 2257537983U;
signed char var_16 = (signed char)-69;
unsigned int var_17 = 812164465U;
signed char var_18 = (signed char)-30;
signed char var_19 = (signed char)55;
signed char arr_2 [15] [15] ;
unsigned int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 1370853813U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
