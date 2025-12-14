#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14127027323348859214ULL;
signed char var_4 = (signed char)98;
long long int var_5 = 3577443352899794139LL;
long long int var_12 = -4236440826275782730LL;
int zero = 0;
signed char var_14 = (signed char)-107;
unsigned char var_15 = (unsigned char)147;
unsigned long long int var_16 = 3889981133641855078ULL;
long long int var_17 = 1745375304066798478LL;
int arr_4 [16] [16] [16] [16] ;
short arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = -360227436;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (short)19040;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
