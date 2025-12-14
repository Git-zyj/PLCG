#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)192;
unsigned char var_4 = (unsigned char)191;
short var_6 = (short)-15450;
unsigned short var_7 = (unsigned short)48182;
unsigned long long int var_11 = 15947629264501190825ULL;
unsigned long long int var_15 = 11870343169497741292ULL;
int zero = 0;
short var_18 = (short)16756;
short var_19 = (short)-30944;
long long int var_20 = 9059244597596440628LL;
int var_21 = -1513281691;
long long int var_22 = -14605535584219727LL;
long long int var_23 = 3287929692836863712LL;
unsigned long long int arr_0 [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 13390176385990241673ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-13666;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
