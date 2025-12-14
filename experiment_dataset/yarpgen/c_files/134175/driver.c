#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1588603373;
unsigned int var_2 = 39328675U;
unsigned long long int var_3 = 7018646887575750193ULL;
short var_4 = (short)31348;
unsigned char var_5 = (unsigned char)200;
signed char var_6 = (signed char)37;
long long int var_7 = 8951043518685057469LL;
int var_8 = 1466050924;
signed char var_9 = (signed char)-48;
long long int var_10 = -9086826475319754363LL;
signed char var_11 = (signed char)92;
unsigned long long int var_12 = 7903445290962728943ULL;
short var_13 = (short)-15802;
unsigned short var_14 = (unsigned short)25959;
unsigned long long int var_15 = 14279142035912801070ULL;
int zero = 0;
unsigned long long int var_16 = 17276782015946982633ULL;
long long int var_17 = -2103602604553256526LL;
unsigned int var_18 = 2251151358U;
unsigned int var_19 = 2258842099U;
unsigned char var_20 = (unsigned char)157;
unsigned char var_21 = (unsigned char)31;
unsigned char var_22 = (unsigned char)121;
long long int var_23 = 1811535993795473473LL;
unsigned short arr_0 [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] ;
int arr_3 [16] [16] ;
unsigned short arr_4 [16] ;
short arr_5 [16] [16] ;
unsigned short arr_6 [16] [16] [16] ;
_Bool arr_7 [16] [16] [16] ;
unsigned int arr_8 [16] [16] [16] [16] ;
short arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)47479;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 13269465828469276823ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -1358169628;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)18852;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)32588;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)54955;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2629900742U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (short)-30971;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
