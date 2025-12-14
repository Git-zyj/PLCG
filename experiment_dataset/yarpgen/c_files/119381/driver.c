#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3098410165541699636ULL;
signed char var_2 = (signed char)-64;
_Bool var_4 = (_Bool)0;
int var_5 = 441432086;
unsigned long long int var_7 = 13338635555868739444ULL;
unsigned short var_9 = (unsigned short)32096;
unsigned char var_10 = (unsigned char)129;
int zero = 0;
unsigned char var_11 = (unsigned char)152;
short var_12 = (short)-30899;
unsigned char var_13 = (unsigned char)86;
unsigned long long int var_14 = 14436138101067408645ULL;
unsigned int var_15 = 1616037557U;
short var_16 = (short)-21233;
_Bool arr_0 [10] ;
unsigned char arr_2 [10] [10] [10] ;
long long int arr_3 [10] ;
signed char arr_5 [10] [10] [10] ;
short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -4300901140581884718LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)22169 : (short)21945;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
