#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62860;
unsigned char var_1 = (unsigned char)162;
int var_2 = 706807541;
unsigned char var_3 = (unsigned char)188;
unsigned short var_4 = (unsigned short)62340;
int var_5 = 104062302;
unsigned char var_6 = (unsigned char)134;
long long int var_9 = 6425315713288978558LL;
int var_11 = 1698871961;
short var_12 = (short)-26073;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -5289217538751487740LL;
signed char var_18 = (signed char)-1;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)37;
_Bool arr_0 [18] ;
unsigned long long int arr_2 [18] [18] ;
unsigned char arr_3 [18] ;
_Bool arr_5 [18] [18] [18] ;
long long int arr_6 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 9356813449427212131ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = -1602704179924748416LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
