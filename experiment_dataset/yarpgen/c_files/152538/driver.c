#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-114;
unsigned short var_2 = (unsigned short)6436;
short var_4 = (short)-23885;
unsigned char var_5 = (unsigned char)99;
unsigned char var_6 = (unsigned char)89;
unsigned short var_7 = (unsigned short)47297;
short var_8 = (short)-30867;
unsigned int var_9 = 2171897729U;
unsigned long long int var_10 = 7317578375952886079ULL;
long long int var_12 = 1977839785778529263LL;
long long int var_13 = -925072994001988810LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -5700171251445115521LL;
short var_17 = (short)-19681;
signed char var_18 = (signed char)-109;
signed char var_19 = (signed char)-64;
unsigned char var_20 = (unsigned char)177;
unsigned long long int var_21 = 15160078863817957149ULL;
_Bool var_22 = (_Bool)0;
_Bool arr_0 [21] ;
unsigned int arr_1 [21] ;
_Bool arr_2 [21] ;
unsigned short arr_6 [21] ;
unsigned int arr_8 [21] [21] ;
short arr_9 [21] [21] ;
unsigned char arr_13 [21] ;
unsigned long long int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2796158760U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)6740;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 745239687U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)7519;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 2475891752241538260ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
