#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24000;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_13 = (short)-15776;
int zero = 0;
unsigned int var_14 = 151702471U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 209328176U;
unsigned int var_17 = 3013356750U;
int var_18 = -149652321;
unsigned char var_19 = (unsigned char)108;
unsigned char arr_1 [11] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)158 : (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -5963749340791925477LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
