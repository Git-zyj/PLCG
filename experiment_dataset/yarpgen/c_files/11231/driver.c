#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 14496298809699637705ULL;
long long int var_5 = -4531277442160122413LL;
unsigned char var_6 = (unsigned char)121;
unsigned int var_10 = 371401463U;
unsigned char var_13 = (unsigned char)120;
long long int var_14 = 3297937546992923280LL;
unsigned long long int var_17 = 12799751101813642063ULL;
signed char var_18 = (signed char)-34;
int zero = 0;
unsigned long long int var_19 = 8552727022261750221ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3302008939U;
unsigned short var_23 = (unsigned short)7392;
unsigned long long int var_24 = 8775076185130262336ULL;
unsigned int var_25 = 3067543643U;
unsigned long long int var_26 = 14486154282872867382ULL;
unsigned short var_27 = (unsigned short)53596;
unsigned char var_28 = (unsigned char)107;
unsigned char var_29 = (unsigned char)212;
unsigned short var_30 = (unsigned short)29481;
unsigned int var_31 = 49730739U;
unsigned int var_32 = 2108568014U;
unsigned long long int arr_2 [18] [18] ;
signed char arr_7 [18] ;
signed char arr_10 [18] ;
unsigned long long int arr_15 [18] [18] ;
unsigned long long int arr_16 [18] [18] ;
unsigned int arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 11799992299160113194ULL : 9698174818912243727ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)45;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)91;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 17470558474834385578ULL : 1852017126250274703ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 15007956644635467932ULL : 2033446013588283704ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 1260215727U : 492688238U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
