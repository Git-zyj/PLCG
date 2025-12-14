#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
unsigned short var_4 = (unsigned short)29490;
long long int var_5 = 4094421391399022323LL;
long long int var_6 = -4823798815207017220LL;
unsigned char var_7 = (unsigned char)121;
unsigned char var_8 = (unsigned char)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 5446946673985621356ULL;
long long int var_12 = 6028045476561792959LL;
unsigned char var_13 = (unsigned char)167;
unsigned long long int var_14 = 4587058539420145029ULL;
unsigned char var_15 = (unsigned char)73;
unsigned long long int var_16 = 12436436923392654623ULL;
long long int arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 7165349807148933065LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8804185642935900637ULL;
}

void checksum() {
    hash(&seed, var_10);
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
