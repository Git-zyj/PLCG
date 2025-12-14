#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -245151138;
_Bool var_2 = (_Bool)1;
short var_3 = (short)10463;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 936165027U;
unsigned short var_9 = (unsigned short)22193;
int var_11 = 1439038832;
unsigned long long int var_15 = 16387601607645115796ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2626141353006420013LL;
unsigned char var_18 = (unsigned char)192;
signed char var_19 = (signed char)-17;
unsigned char var_20 = (unsigned char)79;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)8;
signed char var_23 = (signed char)-122;
unsigned long long int var_24 = 7967209319719540140ULL;
unsigned int var_25 = 2822381269U;
unsigned short var_26 = (unsigned short)46092;
_Bool var_27 = (_Bool)0;
unsigned char arr_0 [14] [14] ;
short arr_1 [14] ;
int arr_2 [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)-16844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -881222164;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)41641;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 853548401957975098ULL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
