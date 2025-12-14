#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7126703544652274176LL;
int var_3 = -1238029888;
unsigned char var_5 = (unsigned char)177;
signed char var_7 = (signed char)23;
long long int var_9 = -2725996909102007676LL;
unsigned long long int var_10 = 7976226113969980591ULL;
unsigned char var_14 = (unsigned char)194;
unsigned char var_17 = (unsigned char)206;
int zero = 0;
signed char var_18 = (signed char)70;
unsigned char var_19 = (unsigned char)230;
unsigned char var_20 = (unsigned char)2;
int var_21 = 1205262662;
int var_22 = -506936117;
unsigned long long int arr_0 [14] ;
signed char arr_1 [14] [14] ;
signed char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 14787688161026834914ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
