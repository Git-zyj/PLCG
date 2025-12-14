#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)246;
signed char var_2 = (signed char)28;
unsigned int var_4 = 134940896U;
unsigned int var_5 = 1182675119U;
short var_7 = (short)-25696;
long long int var_10 = -2581249433525856994LL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)107;
unsigned long long int var_14 = 1798446591571050404ULL;
long long int var_15 = -6226618260254192495LL;
unsigned int var_16 = 3952508906U;
int zero = 0;
unsigned char var_19 = (unsigned char)67;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14798291997348533326ULL;
unsigned int arr_0 [25] ;
signed char arr_1 [25] ;
short arr_4 [25] [25] ;
unsigned long long int arr_2 [25] ;
short arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3337979424U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (short)21599;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 12710874087109041765ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)20524;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
