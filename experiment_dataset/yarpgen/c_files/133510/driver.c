#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3356314010790538567LL;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)-4;
signed char var_3 = (signed char)79;
short var_10 = (short)-31148;
int var_11 = 934109905;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-28782;
short var_16 = (short)7409;
int zero = 0;
signed char var_17 = (signed char)68;
unsigned short var_18 = (unsigned short)55261;
long long int var_19 = -6104236944160668452LL;
signed char var_20 = (signed char)70;
_Bool var_21 = (_Bool)0;
_Bool arr_0 [14] [14] ;
signed char arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_4 [14] ;
long long int arr_6 [14] [14] [14] ;
unsigned int arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3221814946009364586ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)41460;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1072659443582924124LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 2515300528U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
