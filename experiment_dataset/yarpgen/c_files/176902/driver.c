#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
int var_1 = 904369637;
unsigned short var_3 = (unsigned short)38080;
_Bool var_6 = (_Bool)0;
long long int var_7 = 8593864076212627126LL;
signed char var_13 = (signed char)6;
short var_18 = (short)-10986;
int zero = 0;
unsigned short var_19 = (unsigned short)40001;
unsigned char var_20 = (unsigned char)24;
long long int var_21 = -1577224929914288920LL;
unsigned long long int var_22 = 12453316671434716617ULL;
unsigned int var_23 = 3540287590U;
long long int var_24 = 4978042139703421766LL;
_Bool arr_1 [13] ;
unsigned int arr_3 [13] [13] [13] ;
unsigned short arr_5 [13] ;
unsigned short arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 673050346U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)1934;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16086;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
