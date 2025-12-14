#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12233;
unsigned char var_1 = (unsigned char)30;
int var_3 = 72741901;
unsigned short var_4 = (unsigned short)27629;
int var_5 = -21412226;
int var_7 = -902150000;
long long int var_10 = 8710932899459608884LL;
signed char var_12 = (signed char)-55;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)21432;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)189;
unsigned int var_18 = 1636992525U;
short var_19 = (short)-31082;
long long int var_20 = 7573156196793456192LL;
unsigned int arr_0 [14] ;
short arr_1 [14] ;
_Bool arr_3 [14] ;
unsigned long long int arr_7 [14] [14] [14] ;
long long int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3976635897U : 759986359U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-10685;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6095335944138007709ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 763849453488872102LL : 5498252306684285060LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
