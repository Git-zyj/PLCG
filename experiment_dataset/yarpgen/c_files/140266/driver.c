#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2085069618U;
unsigned long long int var_2 = 855520053209975366ULL;
signed char var_3 = (signed char)32;
long long int var_5 = -7224068607155470023LL;
short var_6 = (short)-25486;
short var_8 = (short)-14646;
unsigned short var_9 = (unsigned short)32897;
int zero = 0;
long long int var_10 = -3902736785729324634LL;
long long int var_11 = -2968858854245643434LL;
long long int var_12 = -3573911148155047539LL;
signed char var_13 = (signed char)-7;
unsigned int var_14 = 2486205495U;
signed char arr_2 [21] [21] [21] ;
unsigned char arr_5 [21] [21] [21] ;
short arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)215 : (unsigned char)13;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-17305 : (short)16701;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
