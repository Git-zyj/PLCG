#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40898;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)48438;
unsigned short var_10 = (unsigned short)63270;
int zero = 0;
short var_20 = (short)-5798;
int var_21 = 1155074512;
_Bool var_22 = (_Bool)0;
int var_23 = -780660360;
int var_24 = -1947423127;
unsigned short var_25 = (unsigned short)48681;
int var_26 = 2067883176;
unsigned char arr_1 [13] [13] ;
unsigned long long int arr_4 [13] ;
unsigned short arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 14764495815101198075ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)36938 : (unsigned short)24483;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
