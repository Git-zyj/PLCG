#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17363828855725741205ULL;
signed char var_2 = (signed char)-77;
signed char var_3 = (signed char)-57;
unsigned long long int var_5 = 6797381218657998687ULL;
unsigned char var_7 = (unsigned char)109;
signed char var_9 = (signed char)77;
unsigned char var_10 = (unsigned char)167;
unsigned char var_13 = (unsigned char)24;
int zero = 0;
long long int var_14 = -492032797230256896LL;
unsigned long long int var_15 = 12994520999343165714ULL;
long long int var_16 = -8810549600163180735LL;
int var_17 = 786087129;
unsigned char var_18 = (unsigned char)69;
signed char var_19 = (signed char)-114;
short var_20 = (short)27051;
unsigned char arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned long long int arr_5 [14] [14] ;
unsigned long long int arr_8 [14] ;
unsigned short arr_2 [18] [18] ;
unsigned char arr_3 [18] [18] ;
signed char arr_6 [14] ;
short arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 17071860921897052177ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 5944555756493724195ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)10821;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (short)-23731;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
