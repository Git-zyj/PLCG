#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1070633875255968820LL;
unsigned long long int var_1 = 8914178116466696936ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)26956;
unsigned char var_4 = (unsigned char)101;
short var_5 = (short)29523;
unsigned short var_6 = (unsigned short)11596;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2625412587U;
int zero = 0;
long long int var_10 = -1045275432110085097LL;
short var_11 = (short)-30111;
long long int var_12 = -2556214499247928586LL;
signed char var_13 = (signed char)-10;
unsigned long long int var_14 = 4925281173601788321ULL;
signed char var_15 = (signed char)-60;
short var_16 = (short)20771;
unsigned int var_17 = 367635172U;
unsigned short arr_5 [23] ;
unsigned int arr_7 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)32063;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 1416234072U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
