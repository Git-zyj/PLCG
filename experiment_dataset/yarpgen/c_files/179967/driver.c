#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18481;
unsigned char var_3 = (unsigned char)169;
unsigned char var_4 = (unsigned char)233;
unsigned char var_7 = (unsigned char)18;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 3267286977U;
unsigned int var_12 = 3578830997U;
int zero = 0;
int var_14 = -98302867;
unsigned char var_15 = (unsigned char)179;
unsigned long long int var_16 = 4302119029492562748ULL;
short var_17 = (short)2808;
unsigned short var_18 = (unsigned short)32686;
unsigned long long int var_19 = 12328974714708211866ULL;
signed char var_20 = (signed char)113;
long long int arr_5 [15] [15] [15] ;
unsigned char arr_8 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -4358854713622968725LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)234 : (unsigned char)240;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
