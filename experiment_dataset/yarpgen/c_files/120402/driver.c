#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9925;
short var_1 = (short)9563;
unsigned short var_2 = (unsigned short)63233;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)51279;
unsigned long long int var_6 = 14786662824201502997ULL;
unsigned char var_7 = (unsigned char)140;
unsigned short var_8 = (unsigned short)39960;
long long int var_9 = 2508149106080914686LL;
int zero = 0;
unsigned long long int var_10 = 5070369004210212756ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-104;
signed char var_13 = (signed char)-111;
long long int var_14 = 7139162662396902549LL;
unsigned char var_15 = (unsigned char)22;
unsigned char var_16 = (unsigned char)68;
short var_17 = (short)28178;
unsigned short var_18 = (unsigned short)20064;
int var_19 = -475210926;
long long int var_20 = -1367028287122083626LL;
short arr_9 [10] ;
unsigned short arr_12 [10] ;
short arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)-27083;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56255 : (unsigned short)2534;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (short)29955;
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
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
