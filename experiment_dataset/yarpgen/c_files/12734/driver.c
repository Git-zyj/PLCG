#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9053787267625447044LL;
unsigned int var_2 = 1942046611U;
unsigned short var_3 = (unsigned short)10541;
signed char var_4 = (signed char)-8;
int var_6 = -2089699940;
signed char var_9 = (signed char)8;
long long int var_10 = 2349885833183847242LL;
int var_12 = 1052745144;
long long int var_13 = -8123104453464240395LL;
unsigned long long int var_14 = 13826806361887891712ULL;
unsigned long long int var_15 = 2741296884503180895ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)80;
long long int var_18 = -3733649065614141194LL;
int var_19 = -403544741;
int var_20 = -1165731461;
signed char var_21 = (signed char)-78;
unsigned long long int arr_0 [16] ;
short arr_1 [16] [16] ;
unsigned char arr_3 [16] ;
short arr_6 [16] [16] ;
unsigned int arr_8 [16] [16] [16] ;
short arr_9 [16] ;
unsigned short arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7041176283070344232ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)11405;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (short)11430;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 29320338U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)31410 : (short)26380;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56311 : (unsigned short)19564;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
