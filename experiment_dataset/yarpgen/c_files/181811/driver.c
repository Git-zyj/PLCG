#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7062970516593765053LL;
unsigned long long int var_1 = 1950129017664916154ULL;
short var_4 = (short)19936;
signed char var_5 = (signed char)-118;
long long int var_6 = -6067348726231683577LL;
int zero = 0;
signed char var_13 = (signed char)-99;
signed char var_14 = (signed char)-45;
signed char var_15 = (signed char)-25;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)247;
unsigned long long int arr_1 [25] ;
unsigned int arr_2 [25] ;
unsigned char arr_3 [25] [25] [25] ;
unsigned int arr_8 [25] ;
unsigned short arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6890134371569908180ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1271070970U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3654027148U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)41373;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
