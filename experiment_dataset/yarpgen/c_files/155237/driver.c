#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned short var_1 = (unsigned short)33081;
long long int var_2 = 7936020961744634665LL;
unsigned short var_4 = (unsigned short)22670;
signed char var_5 = (signed char)-110;
long long int var_6 = 3969366921626191306LL;
int var_7 = -158846864;
unsigned int var_8 = 3492557967U;
signed char var_10 = (signed char)-77;
int zero = 0;
unsigned long long int var_11 = 10491373658543915334ULL;
long long int var_12 = -5868090696995902367LL;
signed char var_13 = (signed char)-109;
short var_14 = (short)-12311;
unsigned short var_15 = (unsigned short)64147;
signed char arr_0 [15] ;
unsigned short arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)19734;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
