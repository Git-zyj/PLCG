#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33106;
int var_2 = 143253146;
int var_4 = -667684483;
int var_5 = 1924008337;
short var_7 = (short)16496;
signed char var_8 = (signed char)-112;
unsigned int var_9 = 1497377228U;
short var_10 = (short)-1945;
unsigned char var_11 = (unsigned char)134;
signed char var_12 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_13 = 2525107161U;
unsigned short var_14 = (unsigned short)15442;
unsigned short var_15 = (unsigned short)46571;
unsigned short var_16 = (unsigned short)48537;
unsigned long long int var_17 = 263639030695700584ULL;
unsigned int var_18 = 2861460874U;
int var_19 = 1069394071;
int var_20 = -1497251550;
int arr_0 [21] [21] ;
_Bool arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
signed char arr_7 [18] ;
long long int arr_6 [21] [21] ;
unsigned short arr_11 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 1691523520;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 10431915500714400494ULL : 9264178728753584779ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -5378921957960041553LL : -682477648233027446LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned short)38392;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
