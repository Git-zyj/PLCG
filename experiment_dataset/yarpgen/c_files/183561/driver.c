#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11266892368248440057ULL;
short var_2 = (short)7552;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 10422812139276396736ULL;
long long int var_6 = 2838533646497533368LL;
long long int var_8 = 2739984108463332454LL;
unsigned short var_9 = (unsigned short)52215;
signed char var_10 = (signed char)63;
int zero = 0;
unsigned short var_11 = (unsigned short)55952;
unsigned char var_12 = (unsigned char)101;
unsigned short var_13 = (unsigned short)32740;
short var_14 = (short)6224;
unsigned long long int var_15 = 4124933686524147249ULL;
int var_16 = 664214974;
unsigned short var_17 = (unsigned short)50225;
unsigned int arr_0 [23] ;
_Bool arr_1 [23] [23] ;
long long int arr_2 [10] [10] ;
signed char arr_3 [10] ;
unsigned short arr_4 [10] [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 766467537U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -8000216527330051125LL : -2778113237074713218LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-114 : (signed char)-113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)27420 : (unsigned short)3116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 16431312788691826734ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
