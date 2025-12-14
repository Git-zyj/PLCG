#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)42533;
unsigned short var_4 = (unsigned short)15267;
_Bool var_5 = (_Bool)0;
int var_7 = -386132741;
unsigned short var_9 = (unsigned short)29131;
int var_10 = 551535694;
unsigned char var_11 = (unsigned char)129;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 111563802;
signed char var_14 = (signed char)-8;
signed char var_15 = (signed char)32;
signed char var_16 = (signed char)-125;
unsigned long long int var_17 = 11793093609603837016ULL;
unsigned short arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21440;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
