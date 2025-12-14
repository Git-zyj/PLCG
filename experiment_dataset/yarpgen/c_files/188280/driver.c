#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62892;
unsigned short var_2 = (unsigned short)30163;
unsigned short var_3 = (unsigned short)25689;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 9413955423966162720ULL;
unsigned char var_11 = (unsigned char)142;
long long int var_13 = -7609561389251016290LL;
int zero = 0;
unsigned char var_18 = (unsigned char)69;
unsigned long long int var_19 = 1198121848262402171ULL;
unsigned char var_20 = (unsigned char)5;
unsigned char var_21 = (unsigned char)56;
_Bool var_22 = (_Bool)0;
unsigned char arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned char arr_4 [23] ;
unsigned long long int arr_6 [23] ;
long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 9551048853879205764ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -1987196530935020626LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
