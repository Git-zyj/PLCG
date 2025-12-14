#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2234517520U;
signed char var_4 = (signed char)47;
signed char var_6 = (signed char)-111;
long long int var_7 = -6284420602474348380LL;
unsigned char var_8 = (unsigned char)126;
long long int var_9 = 8409157175016955333LL;
int var_10 = 1612349001;
int zero = 0;
unsigned long long int var_11 = 5829242863766457181ULL;
signed char var_12 = (signed char)120;
unsigned short var_13 = (unsigned short)58432;
signed char var_14 = (signed char)15;
_Bool var_15 = (_Bool)0;
int var_16 = -840875532;
unsigned int var_17 = 214487931U;
long long int var_18 = -6138191733422655143LL;
unsigned char var_19 = (unsigned char)68;
unsigned int arr_0 [14] [14] ;
unsigned int arr_1 [14] [14] ;
_Bool arr_2 [14] [14] ;
_Bool arr_3 [14] [14] [14] ;
unsigned char arr_8 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4233104626U : 2425323292U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 1202515384U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)133;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
