#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17224;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17991500718826452392ULL;
short var_3 = (short)10070;
long long int var_6 = -5164227363203765485LL;
unsigned int var_7 = 2801099666U;
int zero = 0;
int var_10 = 2142926499;
unsigned int var_11 = 1294430466U;
int var_12 = 2062698347;
unsigned short var_13 = (unsigned short)47477;
unsigned short var_14 = (unsigned short)30155;
signed char var_15 = (signed char)7;
unsigned long long int var_16 = 3136433146334785937ULL;
_Bool arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
signed char arr_2 [24] ;
unsigned long long int arr_7 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1999470538U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 6706531039871103933ULL : 3010340295144590069ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
