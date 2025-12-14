#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25301;
unsigned short var_9 = (unsigned short)27681;
signed char var_10 = (signed char)-81;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-13363;
short var_16 = (short)-11841;
unsigned int var_17 = 1334614654U;
signed char var_18 = (signed char)-118;
unsigned short var_19 = (unsigned short)40332;
signed char var_20 = (signed char)-101;
unsigned char arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned int arr_3 [25] ;
int arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)15562;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2524149791U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -449989979;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
