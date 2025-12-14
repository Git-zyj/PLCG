#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-92;
unsigned long long int var_4 = 11299993854934038868ULL;
unsigned int var_5 = 2482930087U;
long long int var_7 = 7638298003812212588LL;
unsigned short var_11 = (unsigned short)21459;
int var_14 = 1565074252;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 7006607295084958492ULL;
int zero = 0;
signed char var_18 = (signed char)38;
unsigned long long int var_19 = 14780563396854498503ULL;
unsigned int var_20 = 1179652755U;
long long int var_21 = -1502076230658445762LL;
unsigned char var_22 = (unsigned char)4;
signed char var_23 = (signed char)115;
short arr_0 [23] ;
unsigned char arr_1 [23] ;
signed char arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
unsigned long long int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-31627 : (short)28807;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 13639935935120522070ULL : 3549104287378671410ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
