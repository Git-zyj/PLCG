#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14868567438733952134ULL;
unsigned short var_5 = (unsigned short)13494;
unsigned char var_6 = (unsigned char)219;
unsigned char var_7 = (unsigned char)34;
unsigned long long int var_9 = 12312425310007260251ULL;
unsigned long long int var_10 = 5170764225663858810ULL;
short var_11 = (short)-20974;
signed char var_13 = (signed char)12;
int zero = 0;
long long int var_15 = -5553398437667238867LL;
int var_16 = 82134210;
unsigned char var_17 = (unsigned char)223;
signed char var_18 = (signed char)-87;
long long int var_19 = -7391616926388183308LL;
int arr_0 [16] [16] ;
unsigned char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -677378827;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)176;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
