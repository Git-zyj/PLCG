#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)242;
unsigned char var_4 = (unsigned char)57;
signed char var_5 = (signed char)45;
int var_8 = -1552864511;
int var_9 = 219042495;
unsigned short var_10 = (unsigned short)59729;
int zero = 0;
int var_13 = -587728255;
signed char var_14 = (signed char)117;
unsigned int var_15 = 3620991432U;
unsigned short var_16 = (unsigned short)64893;
unsigned char var_17 = (unsigned char)210;
int var_18 = 1347635213;
unsigned char arr_1 [11] [11] ;
int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -498889160;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
