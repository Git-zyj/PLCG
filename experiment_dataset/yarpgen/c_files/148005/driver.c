#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17128705578133383431ULL;
unsigned long long int var_2 = 15889230832119354956ULL;
unsigned char var_3 = (unsigned char)85;
short var_4 = (short)11809;
unsigned long long int var_5 = 17175778733970832361ULL;
unsigned short var_6 = (unsigned short)52621;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)21123;
unsigned long long int var_9 = 15506111843082517517ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-24049;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)39791;
int zero = 0;
unsigned long long int var_15 = 15569460901952480276ULL;
unsigned char var_16 = (unsigned char)243;
int var_17 = -2088222239;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2210576074U;
_Bool arr_7 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
