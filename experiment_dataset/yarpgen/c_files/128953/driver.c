#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10547568341196229944ULL;
short var_3 = (short)-31607;
int var_4 = 507772208;
unsigned char var_7 = (unsigned char)67;
unsigned int var_9 = 1648492991U;
signed char var_10 = (signed char)-115;
unsigned long long int var_11 = 8696480919163859216ULL;
int var_12 = -665363180;
unsigned long long int var_14 = 3106589367534841077ULL;
unsigned char var_15 = (unsigned char)231;
int var_16 = -947308575;
short var_17 = (short)-2349;
signed char var_18 = (signed char)127;
int zero = 0;
long long int var_19 = 5787629308676407953LL;
int var_20 = -1754594488;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1425316665U;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 16597706998413688432ULL;
short var_25 = (short)-20677;
signed char var_26 = (signed char)63;
_Bool arr_0 [20] ;
unsigned long long int arr_1 [20] ;
signed char arr_2 [20] [20] ;
unsigned long long int arr_6 [18] [18] ;
unsigned char arr_7 [18] ;
signed char arr_11 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1377260268901202828ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 8145271835461970029ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)103;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
