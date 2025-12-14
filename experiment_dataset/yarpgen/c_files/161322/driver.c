#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8315839845995712138LL;
long long int var_2 = -3733141321904110886LL;
int var_4 = 1613267505;
long long int var_6 = -7843403229279042782LL;
signed char var_11 = (signed char)61;
signed char var_12 = (signed char)39;
unsigned short var_16 = (unsigned short)62302;
int zero = 0;
signed char var_17 = (signed char)-27;
unsigned int var_18 = 1305633269U;
signed char var_19 = (signed char)-113;
unsigned int var_20 = 1099355233U;
short var_21 = (short)-6543;
long long int arr_0 [19] ;
unsigned int arr_2 [19] [19] [19] ;
unsigned short arr_5 [19] [19] ;
long long int arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2612422297633949817LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2169310618U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)47754;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = -6302054787200143640LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
