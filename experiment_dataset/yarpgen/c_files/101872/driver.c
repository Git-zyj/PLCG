#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1279916321;
int var_6 = 1000737223;
int var_7 = -26884083;
int var_8 = 677864125;
int var_9 = -762814967;
int var_12 = -1412135223;
int var_13 = 1128031710;
int var_14 = -1246777042;
int var_17 = -1386244109;
int zero = 0;
int var_18 = 201744650;
int var_19 = 1659700379;
int var_20 = -2110978750;
int var_21 = -870627040;
int arr_0 [18] ;
int arr_2 [18] ;
int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1770398506;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 262076066;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -937108100;
}

void checksum() {
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
