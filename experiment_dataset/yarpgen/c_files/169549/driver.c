#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)120;
unsigned short var_4 = (unsigned short)7;
long long int var_5 = -4042905894245359178LL;
unsigned int var_6 = 4088663722U;
unsigned long long int var_7 = 1106974957014127278ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -1023327059047981219LL;
signed char var_10 = (signed char)122;
unsigned long long int var_11 = 14518074658169454037ULL;
int var_12 = 2053254353;
short var_13 = (short)-30380;
unsigned char var_14 = (unsigned char)227;
int zero = 0;
unsigned char var_15 = (unsigned char)46;
signed char var_16 = (signed char)22;
unsigned int var_17 = 1660947723U;
long long int var_18 = -5707568015705001354LL;
unsigned char arr_9 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)254;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
