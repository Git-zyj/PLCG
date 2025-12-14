#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3765378036993302871ULL;
int var_1 = 43893371;
unsigned char var_2 = (unsigned char)200;
unsigned int var_3 = 1290576793U;
unsigned short var_4 = (unsigned short)62934;
unsigned long long int var_5 = 18432487867775635168ULL;
int var_6 = 1052083457;
unsigned int var_7 = 2683348790U;
unsigned char var_8 = (unsigned char)32;
int var_9 = 2072343204;
long long int var_10 = 4694209008461651601LL;
long long int var_11 = -4679477275635694998LL;
unsigned int var_13 = 1936046805U;
unsigned short var_14 = (unsigned short)3063;
short var_16 = (short)-18753;
int zero = 0;
unsigned int var_17 = 85783018U;
unsigned int var_18 = 986958609U;
unsigned int var_19 = 2988777757U;
int var_20 = 377290602;
unsigned long long int var_21 = 5836789335522251008ULL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3059196959U;
int var_24 = 809332441;
unsigned long long int var_25 = 13915927567797996753ULL;
unsigned short var_26 = (unsigned short)31467;
unsigned long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned int arr_5 [20] ;
unsigned char arr_8 [20] [20] [20] ;
_Bool arr_9 [20] [20] [20] ;
int arr_10 [20] [20] ;
int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 16619982975762594314ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 527923237U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -1826506352;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1451166581;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
