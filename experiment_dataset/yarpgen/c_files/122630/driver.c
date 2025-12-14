#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -495118705;
long long int var_2 = -210960701790107509LL;
short var_3 = (short)-15323;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 9315990092676821008ULL;
signed char var_7 = (signed char)-98;
int var_8 = -1032879629;
unsigned int var_9 = 1354436446U;
int var_12 = -1322111466;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int var_16 = -460495554;
int zero = 0;
signed char var_17 = (signed char)83;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-19309;
int var_20 = 1401344261;
short var_21 = (short)22817;
unsigned int var_22 = 4223724221U;
unsigned char var_23 = (unsigned char)24;
short var_24 = (short)-2599;
unsigned char var_25 = (unsigned char)176;
unsigned char var_26 = (unsigned char)201;
_Bool arr_0 [10] ;
long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_4 [24] ;
unsigned char arr_5 [24] [24] ;
_Bool arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -5704707177515767278LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 10855700430522738238ULL : 1711217503402825065ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
