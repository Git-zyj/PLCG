#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
long long int var_1 = 7430774397811837995LL;
long long int var_2 = 7137672088546785434LL;
int var_3 = 675929838;
unsigned char var_4 = (unsigned char)226;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-124;
unsigned long long int var_8 = 2585598561987902564ULL;
signed char var_9 = (signed char)-126;
int zero = 0;
unsigned char var_10 = (unsigned char)43;
unsigned char var_11 = (unsigned char)123;
int var_12 = -1046863355;
int var_13 = 2080355394;
unsigned long long int var_14 = 1659813641720549421ULL;
unsigned char var_15 = (unsigned char)135;
long long int var_16 = -8460106517670461021LL;
unsigned char var_17 = (unsigned char)87;
unsigned short arr_1 [18] ;
int arr_5 [22] ;
int arr_8 [22] [22] [22] ;
unsigned char arr_3 [18] ;
unsigned char arr_14 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)38302;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -835265214;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -954371052 : 1777325384;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)192 : (unsigned char)7;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
