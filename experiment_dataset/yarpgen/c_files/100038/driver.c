#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51732;
unsigned int var_1 = 1983004026U;
int var_3 = 856086155;
signed char var_9 = (signed char)24;
long long int var_10 = 1540842619034022454LL;
unsigned int var_11 = 41466526U;
signed char var_12 = (signed char)-56;
short var_14 = (short)11401;
unsigned short var_17 = (unsigned short)19493;
int zero = 0;
unsigned int var_18 = 3414386123U;
int var_19 = 406099039;
signed char var_20 = (signed char)70;
signed char var_21 = (signed char)-65;
unsigned char var_22 = (unsigned char)97;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 9611309;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
