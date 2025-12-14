#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1320883769;
signed char var_3 = (signed char)-87;
unsigned int var_4 = 266350019U;
signed char var_7 = (signed char)105;
long long int var_12 = -1095370637180550140LL;
int zero = 0;
short var_15 = (short)30777;
unsigned long long int var_16 = 10440528392092475240ULL;
unsigned short var_17 = (unsigned short)40935;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
signed char arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1186315673138805954ULL : 15808617452209439364ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 12544389305359453343ULL : 17198317182401156067ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-122 : (signed char)27;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
