#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)17398;
int var_4 = -626582319;
unsigned long long int var_11 = 9835271388056482522ULL;
unsigned long long int var_12 = 12692696132292026417ULL;
unsigned int var_14 = 1766569051U;
unsigned short var_15 = (unsigned short)14801;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 12395382576243324763ULL;
unsigned long long int var_19 = 11951994366151241413ULL;
signed char var_20 = (signed char)-66;
short var_21 = (short)3670;
signed char var_22 = (signed char)-12;
signed char arr_0 [22] ;
int arr_1 [22] ;
unsigned long long int arr_5 [22] [22] ;
long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)81;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -1072203714 : -302231685;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 8423890388540404196ULL : 1414550956905145557ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2553018805136443547LL : 5011281429049496130LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
