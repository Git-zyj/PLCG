#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15546800862876677464ULL;
short var_5 = (short)27755;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-11264;
unsigned char var_13 = (unsigned char)248;
unsigned long long int var_14 = 3330119047979975079ULL;
int zero = 0;
int var_15 = 471473483;
unsigned long long int var_16 = 10948848189961913841ULL;
short var_17 = (short)19721;
unsigned long long int var_18 = 18197249805020159304ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_4 [10] [10] ;
unsigned short arr_5 [10] ;
unsigned long long int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 5901045720935450433ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned short)25830;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 8027832641889393070ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
