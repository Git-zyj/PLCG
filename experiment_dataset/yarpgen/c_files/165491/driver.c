#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17429;
int var_5 = 213547193;
signed char var_6 = (signed char)-53;
signed char var_7 = (signed char)-90;
short var_9 = (short)10330;
unsigned long long int var_11 = 18283927086760499468ULL;
int var_12 = 1402191901;
unsigned char var_16 = (unsigned char)83;
int zero = 0;
unsigned short var_19 = (unsigned short)1929;
unsigned short var_20 = (unsigned short)31993;
long long int var_21 = 745264439456105743LL;
unsigned long long int var_22 = 3178953931665894747ULL;
unsigned short var_23 = (unsigned short)41689;
long long int var_24 = 2054611758861737201LL;
unsigned short var_25 = (unsigned short)966;
unsigned char var_26 = (unsigned char)59;
_Bool arr_0 [19] ;
unsigned long long int arr_1 [19] ;
short arr_2 [19] ;
_Bool arr_3 [19] [19] ;
unsigned short arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12283297307353816327ULL : 9866586084885999635ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)15446;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49178 : (unsigned short)43618;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
