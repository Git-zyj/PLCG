#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
_Bool var_2 = (_Bool)1;
long long int var_6 = -4666488184486520954LL;
unsigned short var_7 = (unsigned short)60747;
unsigned short var_9 = (unsigned short)11390;
unsigned long long int var_10 = 9943879564094358126ULL;
signed char var_12 = (signed char)-8;
int var_13 = -833749364;
int var_14 = -1912358841;
int zero = 0;
short var_15 = (short)299;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 470398371U;
signed char var_18 = (signed char)-66;
unsigned char var_19 = (unsigned char)184;
unsigned char arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)152;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
