#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 14391789248180230338ULL;
unsigned char var_3 = (unsigned char)219;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)197;
unsigned long long int var_9 = 2793895288256291373ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)132;
unsigned char var_12 = (unsigned char)187;
unsigned char var_13 = (unsigned char)124;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)144;
unsigned char var_16 = (unsigned char)104;
unsigned char var_17 = (unsigned char)110;
int var_18 = -693438737;
unsigned char arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)150 : (unsigned char)9;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
