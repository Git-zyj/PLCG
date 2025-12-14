#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
_Bool var_1 = (_Bool)0;
int var_4 = 2013552879;
long long int var_7 = -5399669777105304297LL;
unsigned short var_9 = (unsigned short)33786;
unsigned char var_11 = (unsigned char)195;
_Bool var_12 = (_Bool)0;
long long int var_13 = -440436556805163805LL;
int var_17 = -1717413793;
long long int var_18 = 9015134775142040692LL;
int zero = 0;
unsigned long long int var_19 = 15269822070631389338ULL;
unsigned long long int var_20 = 6896630411848089308ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)23557;
signed char var_24 = (signed char)-95;
long long int arr_6 [12] ;
unsigned short arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -5586268663610176611LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)46416;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
