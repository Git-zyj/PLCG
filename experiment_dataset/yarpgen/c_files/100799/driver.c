#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49171;
signed char var_3 = (signed char)-79;
unsigned short var_6 = (unsigned short)62494;
unsigned long long int var_9 = 3089232037298751220ULL;
long long int var_10 = 5471216092798096285LL;
int var_11 = -1740202527;
unsigned short var_17 = (unsigned short)23967;
int zero = 0;
unsigned char var_20 = (unsigned char)139;
long long int var_21 = 6228136005328415879LL;
unsigned short var_22 = (unsigned short)23602;
unsigned long long int var_23 = 8123285032467556736ULL;
unsigned long long int var_24 = 272296422360223250ULL;
unsigned short var_25 = (unsigned short)44028;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-45;
int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned char arr_7 [11] [11] [11] ;
unsigned long long int arr_2 [23] ;
long long int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1220329870;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 891466879025472409LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 11162035670486522386ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -634443529542184976LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
