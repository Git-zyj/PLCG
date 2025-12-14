#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4292;
unsigned long long int var_2 = 491457515834417288ULL;
signed char var_5 = (signed char)-41;
unsigned short var_6 = (unsigned short)43288;
signed char var_7 = (signed char)110;
unsigned short var_8 = (unsigned short)40197;
long long int var_10 = -4310869163187032292LL;
unsigned char var_11 = (unsigned char)10;
int var_12 = 351132348;
unsigned long long int var_13 = 8952271191244236347ULL;
int zero = 0;
short var_14 = (short)15497;
signed char var_15 = (signed char)1;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 3168077994801634656ULL;
unsigned char var_18 = (unsigned char)20;
long long int arr_0 [14] ;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
signed char arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5895071643829647951LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1454223693U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)51656;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)100;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
