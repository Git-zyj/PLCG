#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -487381015782066093LL;
int var_1 = -1468019937;
int var_2 = -1990740744;
_Bool var_3 = (_Bool)1;
short var_5 = (short)12527;
long long int var_6 = 8077987642549989434LL;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 1191808941U;
unsigned long long int var_11 = 18360157551150458451ULL;
long long int var_12 = -106863732800366188LL;
unsigned char var_13 = (unsigned char)140;
int zero = 0;
signed char var_14 = (signed char)17;
unsigned int var_15 = 2287828067U;
int var_16 = 1270742045;
long long int var_17 = 2967666172314290798LL;
unsigned long long int var_18 = 1471645462877120854ULL;
unsigned long long int var_19 = 7737926472900290459ULL;
int var_20 = -274535389;
unsigned long long int var_21 = 9431547972172223337ULL;
unsigned int var_22 = 372890594U;
unsigned long long int var_23 = 9272564171065084634ULL;
int var_24 = 1866150220;
unsigned short var_25 = (unsigned short)39556;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)9208;
unsigned int var_28 = 3878485853U;
signed char var_29 = (signed char)111;
unsigned char var_30 = (unsigned char)28;
unsigned long long int arr_3 [12] [12] ;
unsigned char arr_10 [25] ;
short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 18070248498066522204ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (short)24287;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
