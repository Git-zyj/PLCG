#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5362076132909429065LL;
signed char var_5 = (signed char)80;
unsigned long long int var_6 = 9204682591519168450ULL;
unsigned short var_7 = (unsigned short)41346;
int zero = 0;
long long int var_10 = -6747405888551645422LL;
unsigned long long int var_11 = 7942541787134123634ULL;
long long int var_12 = -5762835210362946784LL;
unsigned char var_13 = (unsigned char)246;
long long int var_14 = -7547095879876125531LL;
unsigned long long int var_15 = 2524556104638124888ULL;
unsigned short var_16 = (unsigned short)59795;
unsigned char var_17 = (unsigned char)56;
int arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] ;
long long int arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] ;
unsigned long long int arr_9 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -75770725;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10803;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 12916714643400542242ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 7555199364412448953ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 2585776782273951778LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 731472087665413239LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1202631848937539146ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
