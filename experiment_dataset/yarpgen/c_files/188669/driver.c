#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28328;
unsigned char var_9 = (unsigned char)208;
unsigned long long int var_12 = 17127754149092681354ULL;
unsigned short var_13 = (unsigned short)57601;
int zero = 0;
unsigned long long int var_14 = 16627496339357673165ULL;
signed char var_15 = (signed char)-46;
unsigned int var_16 = 814837967U;
short var_17 = (short)32042;
short var_18 = (short)30730;
unsigned short var_19 = (unsigned short)9608;
unsigned long long int var_20 = 7699404549043699134ULL;
int var_21 = 218513909;
unsigned int var_22 = 1295436421U;
short arr_0 [10] ;
long long int arr_1 [10] ;
long long int arr_3 [14] ;
unsigned long long int arr_4 [14] ;
signed char arr_7 [25] ;
unsigned short arr_2 [10] ;
unsigned long long int arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)15666;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -3100348422595854310LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2004641210839640257LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 8696864144993765547ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)63735;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 12165773576832946892ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
