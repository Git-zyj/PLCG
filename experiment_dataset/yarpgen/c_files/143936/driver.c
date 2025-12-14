#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59326;
unsigned char var_1 = (unsigned char)177;
short var_2 = (short)-27244;
unsigned int var_3 = 3061785296U;
unsigned char var_6 = (unsigned char)159;
unsigned int var_7 = 1257834920U;
signed char var_9 = (signed char)-39;
unsigned long long int var_10 = 11323233220071188572ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 1634492009U;
int zero = 0;
signed char var_15 = (signed char)-28;
long long int var_16 = -1088600347836915665LL;
unsigned short var_17 = (unsigned short)18688;
short var_18 = (short)27484;
unsigned long long int var_19 = 4059678481002379987ULL;
long long int var_20 = -172741251522826153LL;
short var_21 = (short)-5244;
long long int var_22 = 7373551808709692070LL;
signed char var_23 = (signed char)-67;
unsigned short var_24 = (unsigned short)2217;
int var_25 = 366978149;
unsigned char arr_1 [19] [19] ;
int arr_2 [19] [19] ;
_Bool arr_3 [19] ;
unsigned long long int arr_5 [19] [19] ;
unsigned long long int arr_6 [19] [19] ;
unsigned char arr_7 [19] ;
unsigned long long int arr_4 [19] ;
long long int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -1089477480;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3852601795419352950ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = 14351982042032314383ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 18288614382860806769ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -3422990360907712541LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
