#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)252;
signed char var_8 = (signed char)-107;
unsigned int var_11 = 125142535U;
unsigned long long int var_13 = 15750166551031216155ULL;
int zero = 0;
unsigned long long int var_14 = 17382916628274631793ULL;
unsigned short var_15 = (unsigned short)3852;
short var_16 = (short)14009;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17705199925077487937ULL;
unsigned short var_19 = (unsigned short)1485;
short var_20 = (short)4223;
signed char arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-121;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
