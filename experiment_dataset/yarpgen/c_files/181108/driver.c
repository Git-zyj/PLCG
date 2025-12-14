#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1702979575;
int var_3 = 842912913;
int var_6 = -78735408;
unsigned char var_7 = (unsigned char)141;
unsigned int var_8 = 2143809968U;
int var_9 = 1494037605;
unsigned char var_11 = (unsigned char)239;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-13490;
int zero = 0;
int var_15 = 498093382;
unsigned short var_16 = (unsigned short)49266;
int var_17 = -1008485087;
int var_18 = 1143397354;
unsigned int var_19 = 299888945U;
unsigned int arr_0 [14] ;
unsigned char arr_1 [14] [14] ;
unsigned long long int arr_2 [14] ;
long long int arr_3 [14] ;
long long int arr_5 [20] ;
signed char arr_6 [20] ;
unsigned short arr_4 [14] ;
unsigned short arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2076257323U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 8486942341622437018ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 9093242823451678124LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -3196663188948612524LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)2749;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)868;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
