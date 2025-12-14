#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15597;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)22;
unsigned char var_6 = (unsigned char)24;
unsigned long long int var_7 = 3102458968645964699ULL;
short var_8 = (short)-27048;
unsigned short var_9 = (unsigned short)32855;
unsigned short var_10 = (unsigned short)30421;
unsigned short var_11 = (unsigned short)11087;
long long int var_12 = 3879193225553315095LL;
unsigned char var_13 = (unsigned char)220;
unsigned long long int var_14 = 10788335787150924059ULL;
unsigned short var_15 = (unsigned short)20257;
int zero = 0;
unsigned short var_16 = (unsigned short)22051;
unsigned char var_17 = (unsigned char)228;
unsigned short var_18 = (unsigned short)18089;
unsigned short var_19 = (unsigned short)22742;
short var_20 = (short)-8690;
signed char var_21 = (signed char)-87;
unsigned long long int var_22 = 17174056326965434651ULL;
signed char arr_2 [20] ;
short arr_3 [20] ;
long long int arr_4 [20] [20] [20] ;
unsigned short arr_5 [20] ;
unsigned int arr_6 [20] [20] ;
signed char arr_8 [25] ;
long long int arr_9 [25] ;
long long int arr_10 [25] [25] ;
unsigned char arr_11 [25] ;
unsigned long long int arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)7552;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 6832797326778929841LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)18835;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 598703959U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = -9054624097773509632LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = -6468807011503303744LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = 8095810390727953647ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
