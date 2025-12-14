#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned char var_2 = (unsigned char)51;
unsigned int var_3 = 2380153590U;
long long int var_4 = -625457305142103097LL;
int var_5 = -1728321313;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 13550066546508851557ULL;
short var_11 = (short)29561;
int var_16 = 344787432;
int zero = 0;
unsigned int var_19 = 1820757348U;
unsigned long long int var_20 = 1081037747705520820ULL;
unsigned short var_21 = (unsigned short)41107;
long long int var_22 = -961919886370105839LL;
unsigned long long int var_23 = 4027135629569849448ULL;
unsigned int var_24 = 1771069631U;
unsigned int var_25 = 2010260268U;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-97;
int var_28 = 1773861073;
long long int var_29 = 1610564103982055778LL;
short var_30 = (short)-366;
long long int arr_3 [17] [17] ;
long long int arr_5 [17] [17] ;
unsigned int arr_8 [18] [18] ;
long long int arr_9 [13] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -8814720065856851409LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -6393702036195419654LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 2615027917U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -2978736341197976911LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2051351178070073672LL : 5783094058971749379LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
