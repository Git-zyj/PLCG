#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -844667963558656976LL;
_Bool var_1 = (_Bool)1;
int var_4 = 391523140;
signed char var_5 = (signed char)-38;
unsigned char var_8 = (unsigned char)97;
signed char var_9 = (signed char)-100;
signed char var_10 = (signed char)5;
unsigned char var_11 = (unsigned char)207;
unsigned char var_12 = (unsigned char)25;
int zero = 0;
unsigned char var_15 = (unsigned char)67;
int var_16 = 143143481;
int var_17 = -363854006;
unsigned char var_18 = (unsigned char)19;
_Bool var_19 = (_Bool)0;
int arr_9 [12] [12] [12] ;
signed char arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2099785437;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-58;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
