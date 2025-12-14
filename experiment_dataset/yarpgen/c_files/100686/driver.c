#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 944277028U;
unsigned short var_2 = (unsigned short)46589;
long long int var_3 = 2424412448166773676LL;
unsigned int var_6 = 3528450569U;
long long int var_7 = -6245175998958317296LL;
unsigned long long int var_8 = 16342772318527062925ULL;
short var_11 = (short)23017;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 5374703665615366837ULL;
unsigned long long int var_14 = 8941228798789567781ULL;
unsigned long long int var_15 = 587156907859977034ULL;
long long int var_16 = 8161167454164438525LL;
signed char var_17 = (signed char)47;
unsigned int var_18 = 2603988957U;
unsigned char var_19 = (unsigned char)4;
unsigned char var_20 = (unsigned char)245;
int var_21 = -391594606;
short var_22 = (short)13614;
short var_23 = (short)21618;
unsigned short arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_4 [11] [11] ;
signed char arr_5 [11] [11] ;
signed char arr_8 [11] [11] ;
unsigned int arr_3 [11] ;
signed char arr_6 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)63143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)41524;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2786966392U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-11;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
