#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2120912150269483718ULL;
signed char var_2 = (signed char)8;
long long int var_3 = 3060772392836438151LL;
unsigned int var_4 = 3183066336U;
unsigned char var_5 = (unsigned char)94;
signed char var_6 = (signed char)53;
unsigned char var_7 = (unsigned char)183;
unsigned char var_8 = (unsigned char)187;
unsigned int var_9 = 2153495930U;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)25237;
unsigned int var_16 = 488744676U;
int var_17 = 784464645;
long long int var_18 = 1349761445869203828LL;
int zero = 0;
unsigned char var_19 = (unsigned char)131;
signed char var_20 = (signed char)-8;
unsigned long long int var_21 = 2056523465572778153ULL;
long long int var_22 = -8972670797656882783LL;
signed char var_23 = (signed char)-127;
signed char var_24 = (signed char)-118;
unsigned char var_25 = (unsigned char)203;
short var_26 = (short)22955;
int var_27 = 2052969255;
unsigned int var_28 = 1919152887U;
unsigned int var_29 = 3505286592U;
signed char var_30 = (signed char)-108;
signed char var_31 = (signed char)-6;
unsigned int arr_0 [25] ;
int arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] [25] ;
_Bool arr_4 [25] ;
int arr_11 [25] ;
long long int arr_12 [25] [25] [25] ;
unsigned int arr_19 [25] ;
unsigned int arr_27 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 305595455U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 89672955;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 2091965830U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1546640155U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1884054701 : -703336358;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -7477293270207937718LL : 1265717677338086719LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 3081764463U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = 3650844621U;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
