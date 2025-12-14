#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 961025203U;
unsigned short var_1 = (unsigned short)56904;
unsigned int var_2 = 2505658144U;
unsigned long long int var_3 = 7272626346190697044ULL;
long long int var_4 = 7387615391949961882LL;
unsigned char var_5 = (unsigned char)125;
unsigned int var_6 = 3136789241U;
unsigned short var_8 = (unsigned short)12467;
signed char var_9 = (signed char)-26;
unsigned int var_12 = 2622184933U;
unsigned long long int var_13 = 16749888836608817528ULL;
long long int var_14 = -2308064181791879300LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1593017975U;
unsigned int var_17 = 577962619U;
int zero = 0;
unsigned int var_18 = 2823079547U;
unsigned int var_19 = 2944944246U;
unsigned char var_20 = (unsigned char)111;
unsigned int var_21 = 2607364425U;
int var_22 = 421304330;
signed char arr_0 [15] ;
unsigned long long int arr_2 [15] ;
short arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 9234668827976876470ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)11972;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
