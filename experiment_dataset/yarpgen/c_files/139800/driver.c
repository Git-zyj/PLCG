#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5135505229057097542LL;
unsigned short var_5 = (unsigned short)17771;
long long int var_6 = 3583130721853458907LL;
short var_10 = (short)15512;
unsigned short var_11 = (unsigned short)24945;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 3092434288U;
unsigned short var_18 = (unsigned short)40770;
int zero = 0;
unsigned char var_19 = (unsigned char)77;
signed char var_20 = (signed char)43;
long long int var_21 = 6963959295346734310LL;
signed char var_22 = (signed char)22;
unsigned short var_23 = (unsigned short)32524;
unsigned short var_24 = (unsigned short)31403;
long long int var_25 = -5858056047035786111LL;
short var_26 = (short)31493;
int var_27 = 1251822727;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3304631087U;
int var_30 = 558615044;
unsigned long long int var_31 = 2548881928694445462ULL;
unsigned int var_32 = 1260180596U;
_Bool arr_0 [11] ;
signed char arr_1 [11] [11] ;
unsigned short arr_6 [11] ;
unsigned int arr_8 [11] [11] ;
short arr_9 [11] [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
int arr_11 [21] ;
long long int arr_12 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)30695;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 1749569170U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)5760;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 4857178683203749789ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 179251497;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = 7577387562361377656LL;
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
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
