#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22586;
long long int var_1 = 7946603105852867458LL;
unsigned long long int var_5 = 6398258924099305706ULL;
unsigned char var_6 = (unsigned char)131;
unsigned long long int var_9 = 15956637515397479814ULL;
signed char var_14 = (signed char)-4;
int zero = 0;
unsigned char var_15 = (unsigned char)18;
short var_16 = (short)-12245;
_Bool var_17 = (_Bool)0;
short var_18 = (short)17780;
_Bool var_19 = (_Bool)1;
short var_20 = (short)21893;
int var_21 = -929384552;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
int arr_2 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-20155;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1056269882;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 123006681680472429ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
