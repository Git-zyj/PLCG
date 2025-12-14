#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)25099;
long long int var_3 = 5945615287259597007LL;
unsigned char var_5 = (unsigned char)32;
int var_6 = -91792231;
unsigned char var_7 = (unsigned char)243;
unsigned char var_8 = (unsigned char)18;
unsigned long long int var_10 = 16602517990950521924ULL;
unsigned long long int var_11 = 16415258736484839675ULL;
long long int var_12 = -3198531294176367908LL;
int zero = 0;
int var_13 = 1793474028;
unsigned short var_14 = (unsigned short)30111;
_Bool var_15 = (_Bool)1;
long long int arr_0 [18] ;
long long int arr_1 [18] ;
unsigned char arr_2 [18] ;
int arr_3 [18] ;
long long int arr_4 [18] [18] ;
_Bool arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8337921842972807461LL : -8712521202674161868LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -6672385389647079581LL : -4803923378053734758LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1790184886;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1299709689076816036LL : 3089581031749127143LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
