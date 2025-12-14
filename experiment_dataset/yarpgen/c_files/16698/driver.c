#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38614;
short var_2 = (short)-9453;
unsigned char var_3 = (unsigned char)224;
unsigned char var_4 = (unsigned char)246;
unsigned short var_6 = (unsigned short)17528;
unsigned short var_7 = (unsigned short)45195;
unsigned char var_8 = (unsigned char)11;
unsigned char var_9 = (unsigned char)251;
short var_10 = (short)10661;
unsigned short var_11 = (unsigned short)59244;
unsigned char var_12 = (unsigned char)122;
int zero = 0;
unsigned short var_14 = (unsigned short)61866;
int var_15 = 31754773;
signed char var_16 = (signed char)-106;
unsigned char var_17 = (unsigned char)174;
unsigned char var_18 = (unsigned char)23;
int var_19 = 662509458;
unsigned short arr_0 [21] ;
int arr_2 [21] ;
long long int arr_5 [21] [21] ;
unsigned short arr_8 [21] [21] ;
short arr_9 [21] ;
unsigned char arr_3 [21] ;
long long int arr_10 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)7091;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1357987233;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 5281889695789478036LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)47264 : (unsigned short)59641;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-28785 : (short)27026;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -2974416391085759149LL : 3684571739900968301LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
