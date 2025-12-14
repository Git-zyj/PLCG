#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 957950052U;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13792301354937016702ULL;
unsigned long long int var_3 = 3572925929708899175ULL;
unsigned char var_4 = (unsigned char)80;
signed char var_5 = (signed char)25;
unsigned short var_6 = (unsigned short)62757;
signed char var_7 = (signed char)-9;
unsigned int var_8 = 2440586982U;
long long int var_9 = 4441772775123692006LL;
unsigned short var_10 = (unsigned short)5347;
unsigned char var_11 = (unsigned char)119;
int zero = 0;
unsigned char var_12 = (unsigned char)75;
signed char var_13 = (signed char)91;
signed char var_14 = (signed char)29;
long long int var_15 = -5691274299167475953LL;
unsigned int var_16 = 1439180022U;
unsigned char var_17 = (unsigned char)27;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3552015692215301457ULL;
unsigned char var_20 = (unsigned char)32;
long long int var_21 = -5746626741275363648LL;
unsigned int var_22 = 4000524107U;
unsigned int var_23 = 487852758U;
long long int arr_0 [22] ;
unsigned char arr_1 [22] ;
unsigned short arr_6 [10] ;
unsigned int arr_7 [10] ;
long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8857320180530943058LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)941;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 882843810U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 8127760446777280533LL : -494972676111007889LL;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
