#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned char var_1 = (unsigned char)14;
long long int var_5 = -5770474382547487117LL;
unsigned char var_7 = (unsigned char)38;
long long int var_8 = -1222797603484440794LL;
unsigned short var_9 = (unsigned short)44840;
unsigned char var_14 = (unsigned char)6;
unsigned int var_15 = 3760116306U;
int zero = 0;
unsigned int var_18 = 3425631504U;
unsigned char var_19 = (unsigned char)106;
long long int var_20 = -6519042924690030488LL;
long long int var_21 = 1353940485475461346LL;
unsigned char var_22 = (unsigned char)17;
unsigned char arr_1 [22] [22] ;
short arr_3 [22] ;
_Bool arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)28887 : (short)-25442;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
