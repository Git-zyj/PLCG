#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 241514193884637326LL;
unsigned short var_1 = (unsigned short)15452;
unsigned short var_2 = (unsigned short)17071;
unsigned long long int var_4 = 7059956213724308834ULL;
unsigned int var_7 = 2653828412U;
short var_9 = (short)-22480;
signed char var_10 = (signed char)-119;
int zero = 0;
unsigned char var_11 = (unsigned char)53;
unsigned char var_12 = (unsigned char)132;
short var_13 = (short)13782;
long long int var_14 = -3931374424992190742LL;
unsigned long long int arr_0 [17] ;
signed char arr_1 [17] ;
signed char arr_8 [17] [17] [17] [17] ;
long long int arr_10 [10] ;
int arr_11 [10] [10] ;
unsigned long long int arr_2 [17] [17] ;
signed char arr_3 [17] ;
long long int arr_12 [10] ;
unsigned int arr_13 [10] [10] ;
signed char arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5904711743529950036ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 2757732718509507582LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 278029846;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3640530994702576484ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = -7179694993493889571LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = 3317337516U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (signed char)58;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
