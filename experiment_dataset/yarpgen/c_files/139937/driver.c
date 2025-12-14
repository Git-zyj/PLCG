#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)134;
short var_11 = (short)-20677;
unsigned char var_13 = (unsigned char)45;
long long int var_14 = -6895240458194608144LL;
unsigned char var_18 = (unsigned char)24;
int zero = 0;
unsigned char var_20 = (unsigned char)162;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
long long int var_24 = 7258261055970801767LL;
long long int var_25 = -5320428032729544480LL;
unsigned short var_26 = (unsigned short)40740;
unsigned long long int var_27 = 16352657802348345012ULL;
short var_28 = (short)29807;
_Bool var_29 = (_Bool)0;
long long int var_30 = -2089310975373979877LL;
signed char arr_2 [14] ;
unsigned long long int arr_7 [20] [20] ;
unsigned char arr_11 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? 5076346642793895286ULL : 14245616426014875283ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (unsigned char)47;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
