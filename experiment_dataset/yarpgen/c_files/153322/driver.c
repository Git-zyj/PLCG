#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8594311418185889477LL;
unsigned char var_6 = (unsigned char)88;
long long int var_7 = -5154824251657459347LL;
unsigned char var_9 = (unsigned char)186;
long long int var_13 = -267293239144822641LL;
int var_15 = 1405950545;
int zero = 0;
long long int var_16 = 944727649786365631LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 4736109340360877052LL;
short var_19 = (short)7159;
short var_20 = (short)9826;
short var_21 = (short)21419;
_Bool var_22 = (_Bool)1;
short var_23 = (short)1345;
long long int arr_3 [15] [15] [15] ;
unsigned char arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6733118190473483345LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)85 : (unsigned char)190;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
