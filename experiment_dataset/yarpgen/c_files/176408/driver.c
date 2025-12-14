#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54676;
int var_2 = -1112470066;
int var_3 = 155844061;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)177;
unsigned char var_6 = (unsigned char)229;
signed char var_7 = (signed char)-9;
unsigned int var_8 = 258081345U;
unsigned char var_9 = (unsigned char)117;
int zero = 0;
short var_10 = (short)-11327;
short var_11 = (short)-9815;
unsigned char var_12 = (unsigned char)57;
unsigned long long int var_13 = 15677317296142081381ULL;
signed char var_14 = (signed char)-91;
short var_15 = (short)-13596;
int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
int arr_8 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2055188544;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2967183328U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1547851067;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
