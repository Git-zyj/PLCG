#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)154;
long long int var_1 = 4207804456678622967LL;
unsigned long long int var_2 = 211137400987388173ULL;
unsigned short var_3 = (unsigned short)45610;
unsigned char var_4 = (unsigned char)61;
int var_5 = -219644068;
long long int var_6 = -729313275488950381LL;
signed char var_7 = (signed char)28;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)110;
unsigned long long int var_13 = 462530043338646058ULL;
signed char var_14 = (signed char)27;
int var_15 = 1036446263;
unsigned char var_16 = (unsigned char)74;
unsigned int var_17 = 3686899338U;
unsigned short var_18 = (unsigned short)25772;
unsigned char var_19 = (unsigned char)2;
signed char arr_17 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-21 : (signed char)95;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
