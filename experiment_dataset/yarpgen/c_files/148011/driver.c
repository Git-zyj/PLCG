#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 2286753250421832406LL;
signed char var_3 = (signed char)14;
long long int var_4 = 1284140385617662158LL;
long long int var_5 = -4617115744880269212LL;
unsigned long long int var_7 = 17082496648202569792ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4929779050369571102LL;
long long int var_11 = -9151716752198296640LL;
signed char var_12 = (signed char)-104;
unsigned long long int var_13 = 2567750585644920078ULL;
signed char var_15 = (signed char)65;
unsigned int var_18 = 943082843U;
int zero = 0;
long long int var_20 = 5531809479018667574LL;
unsigned short var_21 = (unsigned short)1154;
int var_22 = 434230266;
int var_23 = -1425535428;
_Bool var_24 = (_Bool)0;
long long int var_25 = -4809334223739457266LL;
unsigned short var_26 = (unsigned short)11918;
signed char var_27 = (signed char)115;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_6 [21] [21] ;
unsigned short arr_11 [12] [12] ;
long long int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 5220920480206814435ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 6438420088901534269ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)4057;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = -5891866751401638203LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
