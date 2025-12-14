#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 700685152U;
short var_1 = (short)-17421;
short var_2 = (short)7809;
unsigned int var_3 = 3319081265U;
unsigned int var_4 = 1349836281U;
signed char var_5 = (signed char)94;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 2110506945U;
unsigned long long int var_13 = 17982040088821889065ULL;
unsigned short var_15 = (unsigned short)5578;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 221147374U;
short var_20 = (short)20483;
short var_21 = (short)-24216;
short var_22 = (short)-31997;
signed char var_23 = (signed char)-109;
short var_24 = (short)-28003;
short var_25 = (short)-5928;
unsigned int var_26 = 339699256U;
signed char arr_1 [16] ;
short arr_3 [16] ;
unsigned int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-24416;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2972337149U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
