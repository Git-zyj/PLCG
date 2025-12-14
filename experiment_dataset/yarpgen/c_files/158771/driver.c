#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -113774602;
long long int var_4 = -2982838816794545079LL;
unsigned int var_6 = 1032360516U;
short var_7 = (short)29955;
_Bool var_8 = (_Bool)1;
int var_11 = -224626243;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -5720297843381948565LL;
unsigned char var_14 = (unsigned char)239;
unsigned char var_15 = (unsigned char)10;
unsigned char var_16 = (unsigned char)154;
long long int var_17 = 2823572681780767809LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)87;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)45;
_Bool var_23 = (_Bool)1;
int arr_0 [17] ;
long long int arr_1 [17] ;
unsigned short arr_5 [17] [17] [17] ;
signed char arr_6 [17] ;
unsigned long long int arr_9 [17] [17] ;
long long int arr_10 [17] [17] ;
_Bool arr_13 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -499445800;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -7265446546014815217LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)45028;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-97 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 6453375725306121638ULL : 9556400527796653756ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 98399533725425670LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
