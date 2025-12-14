#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3398352436506908308LL;
int var_1 = 1425312927;
long long int var_2 = -992210486169438778LL;
short var_3 = (short)31888;
long long int var_6 = 2326641514309583170LL;
unsigned int var_8 = 3649143848U;
int var_9 = -1398728493;
short var_10 = (short)-12669;
int var_11 = 351774289;
int var_13 = -221535768;
unsigned int var_17 = 555301343U;
unsigned char var_18 = (unsigned char)240;
int zero = 0;
short var_19 = (short)-737;
unsigned char var_20 = (unsigned char)122;
int var_21 = 1847095822;
long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4370072140610672411LL : -2839747878516711153LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
