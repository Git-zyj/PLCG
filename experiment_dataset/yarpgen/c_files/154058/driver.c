#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4378949539706387614LL;
long long int var_1 = -2857351514475190288LL;
unsigned short var_2 = (unsigned short)33618;
unsigned short var_3 = (unsigned short)10733;
unsigned char var_4 = (unsigned char)21;
signed char var_5 = (signed char)75;
short var_6 = (short)32469;
unsigned int var_11 = 392470398U;
int zero = 0;
unsigned short var_12 = (unsigned short)99;
unsigned long long int var_13 = 3280279370548123528ULL;
int var_14 = 750210675;
unsigned short var_15 = (unsigned short)64802;
short var_16 = (short)-16630;
unsigned long long int var_17 = 8417366352806644174ULL;
signed char arr_2 [15] ;
signed char arr_8 [21] [21] ;
long long int arr_9 [21] ;
int arr_3 [15] ;
signed char arr_7 [15] [15] ;
long long int arr_10 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 3868607099967034510LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1334272527;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = -2143127587621871968LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
