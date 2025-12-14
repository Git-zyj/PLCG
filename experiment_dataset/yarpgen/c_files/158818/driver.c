#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
unsigned long long int var_1 = 1527281111422470143ULL;
unsigned short var_4 = (unsigned short)29998;
unsigned short var_6 = (unsigned short)7369;
unsigned short var_8 = (unsigned short)62250;
unsigned char var_9 = (unsigned char)180;
long long int var_10 = -3298971825141842734LL;
int var_11 = -1153622116;
unsigned char var_12 = (unsigned char)204;
long long int var_13 = -5801211832924125905LL;
int var_15 = -805499977;
int zero = 0;
int var_16 = -655483068;
int var_17 = -1068694965;
long long int var_18 = 7287952089695261554LL;
int var_19 = -2141892721;
unsigned char var_20 = (unsigned char)6;
unsigned short var_21 = (unsigned short)29880;
long long int var_22 = -8877088772928020517LL;
unsigned short var_23 = (unsigned short)30304;
unsigned long long int var_24 = 17203196034926736519ULL;
unsigned short var_25 = (unsigned short)1184;
long long int arr_1 [13] ;
unsigned char arr_2 [13] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9087989296097854142LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -549089292 : -312748070;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
