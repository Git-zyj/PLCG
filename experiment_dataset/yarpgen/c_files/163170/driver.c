#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9054767456682938867LL;
unsigned char var_4 = (unsigned char)90;
signed char var_9 = (signed char)21;
short var_11 = (short)-25962;
unsigned short var_12 = (unsigned short)61371;
short var_14 = (short)27008;
unsigned char var_18 = (unsigned char)96;
int zero = 0;
unsigned long long int var_19 = 16649442965137971492ULL;
unsigned long long int var_20 = 12122277732029765852ULL;
unsigned short var_21 = (unsigned short)34348;
short var_22 = (short)-27045;
unsigned short arr_0 [18] ;
signed char arr_2 [18] [18] [18] ;
unsigned short arr_3 [18] [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)57880;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)42746;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)38;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
