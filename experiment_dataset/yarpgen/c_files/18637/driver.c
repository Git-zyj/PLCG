#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32056;
short var_1 = (short)-12064;
long long int var_2 = -6244903576318087470LL;
unsigned long long int var_4 = 1810030693319866191ULL;
int var_8 = 1009484466;
int zero = 0;
unsigned long long int var_11 = 16046668305382725728ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)10349;
signed char var_14 = (signed char)-45;
short var_15 = (short)19325;
unsigned int var_16 = 3049760457U;
signed char var_17 = (signed char)-85;
signed char var_18 = (signed char)-66;
unsigned long long int var_19 = 5194061239035403090ULL;
short arr_0 [10] ;
int arr_1 [10] [10] ;
short arr_2 [20] ;
int arr_3 [20] [20] ;
unsigned short arr_7 [20] [20] ;
unsigned int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)20033;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1829686743;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)29711;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = -391555052;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)52049;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 161961714U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
