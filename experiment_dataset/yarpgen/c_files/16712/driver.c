#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1225468643;
short var_1 = (short)32275;
long long int var_4 = -545026301831194276LL;
unsigned char var_13 = (unsigned char)43;
unsigned char var_15 = (unsigned char)81;
int zero = 0;
unsigned int var_17 = 3022312819U;
short var_18 = (short)-4448;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6501039384778556087LL;
signed char var_21 = (signed char)-121;
unsigned char arr_1 [11] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)119 : (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 2793457408811431632ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
