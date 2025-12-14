#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-54;
unsigned long long int var_1 = 6895100963180805144ULL;
unsigned long long int var_3 = 14824569611597720057ULL;
unsigned int var_4 = 949335267U;
signed char var_5 = (signed char)24;
short var_6 = (short)-13650;
unsigned short var_8 = (unsigned short)27267;
unsigned char var_11 = (unsigned char)105;
unsigned long long int var_12 = 3125555484138070159ULL;
int zero = 0;
signed char var_14 = (signed char)-73;
signed char var_15 = (signed char)37;
short var_16 = (short)-5153;
int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1072516058 : 925937147;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
