#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 913259783U;
signed char var_2 = (signed char)-2;
unsigned long long int var_3 = 16876630497779147113ULL;
unsigned char var_4 = (unsigned char)161;
unsigned long long int var_6 = 4140332840048044893ULL;
signed char var_7 = (signed char)118;
int var_10 = 250133054;
int var_11 = -1209120044;
int var_12 = -1762765759;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
unsigned int var_15 = 3896575150U;
unsigned int var_16 = 656241295U;
short var_17 = (short)-4104;
unsigned char arr_0 [25] ;
int arr_1 [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 344683847 : 1739245133;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15798170472912906551ULL;
}

void checksum() {
    hash(&seed, var_14);
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
