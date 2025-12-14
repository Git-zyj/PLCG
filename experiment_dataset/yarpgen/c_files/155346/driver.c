#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25046;
short var_7 = (short)27446;
unsigned char var_10 = (unsigned char)201;
signed char var_13 = (signed char)76;
unsigned long long int var_14 = 2072656946101438485ULL;
unsigned int var_18 = 2692203861U;
int zero = 0;
unsigned int var_19 = 1319851719U;
long long int var_20 = -7187181111584069672LL;
long long int var_21 = -6616279629935461912LL;
short var_22 = (short)-8458;
short var_23 = (short)2239;
unsigned short var_24 = (unsigned short)55633;
int arr_3 [17] ;
short arr_4 [17] ;
short arr_5 [17] [17] [17] ;
unsigned short arr_6 [17] [17] [17] ;
short arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -713496496;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-3092 : (short)12369;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)7498;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)3417 : (unsigned short)19833;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)3853;
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
