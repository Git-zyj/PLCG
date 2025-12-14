#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -400098371;
int var_4 = -945974798;
unsigned char var_6 = (unsigned char)164;
short var_7 = (short)4124;
unsigned short var_8 = (unsigned short)7998;
unsigned long long int var_11 = 4201633663034903088ULL;
signed char var_12 = (signed char)-7;
unsigned short var_14 = (unsigned short)21572;
unsigned short var_18 = (unsigned short)18427;
int zero = 0;
unsigned char var_20 = (unsigned char)1;
short var_21 = (short)-10160;
unsigned long long int var_22 = 17846605935391821477ULL;
long long int var_23 = -2526135770547094530LL;
signed char var_24 = (signed char)123;
unsigned char var_25 = (unsigned char)86;
_Bool arr_2 [15] ;
int arr_4 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1344795845;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
