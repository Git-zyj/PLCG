#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -53254800;
long long int var_1 = 3743295183611657691LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3101936722U;
unsigned int var_6 = 1311615712U;
int var_7 = 1483447410;
short var_10 = (short)13102;
short var_12 = (short)-16537;
short var_13 = (short)-20627;
signed char var_15 = (signed char)-26;
int zero = 0;
unsigned long long int var_18 = 15213343618453180216ULL;
unsigned short var_19 = (unsigned short)24812;
signed char var_20 = (signed char)-45;
unsigned short var_21 = (unsigned short)54439;
unsigned short var_22 = (unsigned short)5730;
unsigned short var_23 = (unsigned short)30950;
long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_3 [20] [20] ;
short arr_4 [20] [20] [20] [20] ;
_Bool arr_5 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -2889862111876257069LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 362198709867304397ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (short)17178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
