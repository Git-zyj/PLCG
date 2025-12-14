#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2706382083238988283LL;
unsigned short var_6 = (unsigned short)44353;
long long int var_7 = -7735156446683855523LL;
long long int var_9 = 1764348388614806734LL;
int var_10 = 1998513100;
long long int var_12 = -7696374360178188473LL;
unsigned short var_14 = (unsigned short)48793;
unsigned int var_17 = 722363459U;
int zero = 0;
unsigned short var_18 = (unsigned short)65122;
int var_19 = 1570307768;
signed char var_20 = (signed char)4;
unsigned char var_21 = (unsigned char)20;
unsigned short var_22 = (unsigned short)24491;
short arr_2 [10] ;
int arr_6 [10] [10] [10] ;
long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)29210;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1222546317;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -6635953154970869840LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
