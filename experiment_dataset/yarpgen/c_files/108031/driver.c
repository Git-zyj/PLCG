#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2883166390U;
long long int var_1 = 8389131961491833498LL;
short var_2 = (short)22498;
short var_5 = (short)11747;
signed char var_6 = (signed char)79;
unsigned short var_10 = (unsigned short)25726;
int zero = 0;
short var_11 = (short)19952;
unsigned short var_12 = (unsigned short)13823;
unsigned char var_13 = (unsigned char)213;
long long int var_14 = 2321571622218691727LL;
unsigned short var_15 = (unsigned short)56792;
int var_16 = 920777250;
unsigned char var_17 = (unsigned char)117;
unsigned char var_18 = (unsigned char)78;
unsigned int arr_0 [13] ;
signed char arr_1 [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 48157520U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)98;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
