#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21353;
unsigned char var_2 = (unsigned char)233;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 3022906466U;
int zero = 0;
unsigned char var_13 = (unsigned char)253;
unsigned short var_14 = (unsigned short)49850;
unsigned char var_15 = (unsigned char)184;
unsigned int var_16 = 670373884U;
int arr_0 [16] ;
long long int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -497989370;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -58474264325809505LL;
}

void checksum() {
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
