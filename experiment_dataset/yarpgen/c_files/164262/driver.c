#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17204;
unsigned long long int var_1 = 17485844601444677245ULL;
unsigned short var_3 = (unsigned short)28729;
signed char var_4 = (signed char)-104;
unsigned char var_7 = (unsigned char)109;
short var_8 = (short)-11840;
unsigned long long int var_9 = 14684833296550987757ULL;
unsigned long long int var_10 = 10611968077795309687ULL;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
short var_13 = (short)-26571;
unsigned short var_14 = (unsigned short)32413;
long long int var_15 = 762819692544918077LL;
signed char var_16 = (signed char)-62;
long long int var_17 = 5882502513070902479LL;
unsigned long long int var_18 = 2487314729078530349ULL;
unsigned int var_19 = 3899110626U;
signed char arr_1 [13] [13] ;
unsigned long long int arr_4 [13] ;
long long int arr_5 [13] [13] [13] ;
unsigned long long int arr_9 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 18138703760225174730ULL : 7878312689932019050ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5651462437588995698LL : 4901609808419402620LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 15507761667945334973ULL : 6810044736362081256ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
