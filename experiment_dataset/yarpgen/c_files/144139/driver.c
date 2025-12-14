#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31283;
signed char var_5 = (signed char)58;
unsigned char var_7 = (unsigned char)132;
long long int var_8 = -8726450841560738109LL;
unsigned short var_9 = (unsigned short)45396;
int var_10 = 942578445;
unsigned short var_11 = (unsigned short)39075;
long long int var_12 = -1425761216879298333LL;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
unsigned short var_14 = (unsigned short)7208;
short var_15 = (short)-3038;
unsigned long long int var_16 = 3843428052087636945ULL;
int var_17 = -1453113769;
unsigned long long int var_18 = 9943080061588128043ULL;
long long int arr_1 [15] [15] ;
_Bool arr_2 [15] [15] ;
short arr_3 [15] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2540628293644592500LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)26403;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 275829021;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
