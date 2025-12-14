#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned long long int var_1 = 7701353605675775660ULL;
unsigned int var_2 = 2350436800U;
int var_3 = 856057096;
unsigned int var_4 = 1005638922U;
signed char var_5 = (signed char)32;
signed char var_6 = (signed char)72;
int var_7 = -1343412497;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)44;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 8584379789539776038LL;
unsigned char var_12 = (unsigned char)188;
unsigned char var_13 = (unsigned char)109;
signed char arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)-14;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
