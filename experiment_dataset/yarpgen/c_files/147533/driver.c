#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50052;
long long int var_2 = -4895406007065258231LL;
short var_3 = (short)-15883;
unsigned short var_4 = (unsigned short)41870;
signed char var_6 = (signed char)-80;
long long int var_8 = -5174653653778578171LL;
int var_9 = -279647774;
int zero = 0;
long long int var_10 = -7141111322521674499LL;
long long int var_11 = -2781901768913113514LL;
unsigned short var_12 = (unsigned short)62662;
int var_13 = -913959706;
long long int arr_11 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = 4750082810493120105LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
