#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-101;
short var_1 = (short)26087;
long long int var_2 = 8969444600890478468LL;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)11;
signed char var_7 = (signed char)10;
unsigned short var_8 = (unsigned short)36911;
unsigned long long int var_9 = 2473323283964196594ULL;
unsigned int var_10 = 4092363447U;
int zero = 0;
unsigned int var_12 = 2163905486U;
int var_13 = -1184330573;
long long int var_14 = 7683732815232029809LL;
int var_15 = -647719137;
unsigned char var_16 = (unsigned char)220;
long long int var_17 = 6594519625807251845LL;
int var_18 = -1170566548;
short var_19 = (short)-4621;
unsigned short arr_0 [15] ;
signed char arr_1 [15] [15] ;
unsigned short arr_2 [15] ;
unsigned short arr_4 [15] ;
signed char arr_5 [15] ;
unsigned long long int arr_8 [15] [15] ;
int arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)23735;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)45566;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)31644;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 4755017565774019308ULL : 2041755330024100235ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -1831981724 : -861255991;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
