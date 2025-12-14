#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1032360989801732411LL;
signed char var_3 = (signed char)-71;
unsigned char var_4 = (unsigned char)139;
unsigned char var_6 = (unsigned char)40;
signed char var_7 = (signed char)-34;
short var_9 = (short)-484;
signed char var_10 = (signed char)20;
unsigned long long int var_11 = 4827468207087170568ULL;
signed char var_12 = (signed char)34;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_15 = (short)-1895;
signed char arr_3 [25] [25] [25] ;
short arr_4 [25] ;
signed char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-7549 : (short)25884;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-109 : (signed char)-78;
}

void checksum() {
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
