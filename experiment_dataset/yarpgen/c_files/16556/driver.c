#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7492;
unsigned long long int var_2 = 10706221971920143979ULL;
long long int var_3 = 3910820071362912255LL;
unsigned short var_4 = (unsigned short)44774;
unsigned int var_6 = 1024727575U;
unsigned char var_7 = (unsigned char)25;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-58;
int zero = 0;
unsigned long long int var_12 = 4040413382654122191ULL;
unsigned long long int var_13 = 8986030201970628924ULL;
unsigned int var_14 = 2930304697U;
long long int var_15 = 5148586686035659392LL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short arr_0 [14] [14] ;
int arr_1 [14] ;
short arr_2 [14] ;
long long int arr_5 [11] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-1347;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1752836330;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)5179;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 6371284894172559761LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
