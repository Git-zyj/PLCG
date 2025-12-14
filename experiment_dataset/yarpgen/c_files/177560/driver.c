#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3193438865U;
int var_1 = 118256276;
int var_3 = -480960105;
signed char var_4 = (signed char)-73;
unsigned long long int var_5 = 7789628329370618109ULL;
unsigned char var_7 = (unsigned char)49;
signed char var_8 = (signed char)-59;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
int var_11 = -123479425;
unsigned short var_12 = (unsigned short)43685;
unsigned short var_13 = (unsigned short)63270;
long long int var_14 = 9114561874982553012LL;
unsigned int var_15 = 4226873453U;
unsigned int var_16 = 234757338U;
int arr_1 [14] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 278300935;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
