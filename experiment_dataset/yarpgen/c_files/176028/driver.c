#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -792130104;
signed char var_9 = (signed char)-84;
unsigned char var_16 = (unsigned char)101;
int zero = 0;
unsigned char var_17 = (unsigned char)193;
long long int var_18 = 4862935423457057408LL;
unsigned char var_19 = (unsigned char)35;
unsigned int var_20 = 113219717U;
long long int var_21 = 368974553985792431LL;
long long int var_22 = 7469621404923669635LL;
unsigned char var_23 = (unsigned char)192;
signed char var_24 = (signed char)36;
signed char var_25 = (signed char)-63;
long long int var_26 = 97565465523356325LL;
signed char var_27 = (signed char)8;
unsigned char arr_2 [15] [15] ;
unsigned int arr_7 [20] ;
int arr_8 [20] ;
signed char arr_11 [20] [20] [20] ;
unsigned char arr_6 [15] ;
unsigned short arr_24 [20] [20] [20] [20] ;
unsigned int arr_25 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 2439266643U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1605747732;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47540;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = 1859235778U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
