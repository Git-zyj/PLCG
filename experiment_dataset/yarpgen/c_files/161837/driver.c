#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned short var_1 = (unsigned short)24455;
unsigned int var_2 = 2731052216U;
unsigned short var_3 = (unsigned short)43458;
short var_4 = (short)27375;
unsigned char var_5 = (unsigned char)211;
unsigned short var_6 = (unsigned short)23769;
int var_8 = -547519053;
unsigned int var_9 = 2239506068U;
short var_11 = (short)2078;
signed char var_12 = (signed char)-72;
unsigned char var_13 = (unsigned char)174;
unsigned int var_16 = 3973596864U;
int zero = 0;
long long int var_17 = 8892241550146608045LL;
int var_18 = -1604783297;
long long int var_19 = -1447655752330057055LL;
unsigned char var_20 = (unsigned char)243;
int var_21 = 262159062;
unsigned short arr_1 [22] ;
unsigned char arr_4 [22] [22] [22] ;
int arr_5 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)39967;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1890293515;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
