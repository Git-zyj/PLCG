#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2227977822U;
unsigned int var_2 = 1728130370U;
int var_3 = 1036494470;
short var_5 = (short)-20242;
unsigned int var_6 = 226836427U;
short var_9 = (short)-5257;
unsigned char var_10 = (unsigned char)180;
unsigned int var_11 = 1046719254U;
unsigned int var_12 = 1675540543U;
unsigned int var_13 = 2720955624U;
unsigned int var_14 = 1380405927U;
short var_15 = (short)25494;
int zero = 0;
unsigned char var_16 = (unsigned char)70;
unsigned int var_17 = 3592349999U;
unsigned char var_18 = (unsigned char)56;
unsigned char var_19 = (unsigned char)71;
int var_20 = -436109791;
short var_21 = (short)12267;
short arr_2 [24] ;
long long int arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)19883 : (short)17440;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -9222363951631650742LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
