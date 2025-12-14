#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)112;
signed char var_4 = (signed char)22;
signed char var_5 = (signed char)6;
unsigned long long int var_6 = 11765528370444544133ULL;
long long int var_7 = 5397207160833240284LL;
unsigned long long int var_9 = 16593875472234174006ULL;
short var_12 = (short)-12801;
long long int var_13 = -4199919675047669806LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-97;
_Bool var_17 = (_Bool)1;
short var_19 = (short)31666;
int zero = 0;
signed char var_20 = (signed char)-109;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-87;
unsigned long long int var_23 = 7086838042549105250ULL;
short arr_0 [14] ;
signed char arr_1 [14] ;
long long int arr_2 [14] ;
short arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-14044;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2779576025817499770LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)2616 : (short)31850;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
