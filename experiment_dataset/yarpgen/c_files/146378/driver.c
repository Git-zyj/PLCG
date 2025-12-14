#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)14069;
short var_4 = (short)-22162;
unsigned int var_5 = 1102782059U;
long long int var_6 = 2709492966565685391LL;
long long int var_8 = 5457587477143453790LL;
unsigned long long int var_9 = 17132521666702235595ULL;
int zero = 0;
long long int var_10 = -5736966388826014937LL;
unsigned long long int var_11 = 9817157092424939100ULL;
short var_12 = (short)-12223;
unsigned short var_13 = (unsigned short)26139;
short var_14 = (short)-14202;
short var_15 = (short)-9479;
short arr_4 [11] [11] [11] ;
long long int arr_14 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-28231;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2806209153366072346LL : -7941628068713277791LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
