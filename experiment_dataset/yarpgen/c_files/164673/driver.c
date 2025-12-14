#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
short var_1 = (short)14972;
unsigned short var_5 = (unsigned short)16550;
unsigned short var_8 = (unsigned short)62763;
unsigned int var_11 = 3432271752U;
unsigned short var_13 = (unsigned short)50148;
unsigned short var_17 = (unsigned short)13435;
int zero = 0;
unsigned short var_18 = (unsigned short)29844;
short var_19 = (short)-30599;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7617001909506600873LL;
long long int var_22 = 6693618018925371570LL;
unsigned short var_23 = (unsigned short)49285;
short arr_0 [22] ;
unsigned short arr_1 [22] ;
unsigned short arr_2 [13] ;
unsigned short arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)29110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)46633;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)22110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56292;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
