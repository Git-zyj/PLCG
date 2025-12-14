#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52168;
unsigned long long int var_8 = 7442973642484919806ULL;
int var_10 = 1799876421;
unsigned short var_11 = (unsigned short)8826;
long long int var_15 = -3408359074810305956LL;
int zero = 0;
short var_18 = (short)23665;
unsigned char var_19 = (unsigned char)119;
unsigned long long int var_20 = 8404592331752387599ULL;
int var_21 = 1981370762;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-12732;
signed char var_24 = (signed char)21;
unsigned int var_25 = 3610715431U;
unsigned int arr_1 [23] ;
unsigned int arr_3 [23] [23] ;
signed char arr_4 [22] ;
_Bool arr_6 [15] [15] ;
unsigned int arr_7 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 420709860U : 3311518562U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 3376527153U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3610891154U : 2962415219U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
