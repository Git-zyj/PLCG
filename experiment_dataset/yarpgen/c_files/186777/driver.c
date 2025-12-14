#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20769;
short var_1 = (short)-29018;
unsigned char var_3 = (unsigned char)174;
int var_4 = -1317069454;
_Bool var_5 = (_Bool)0;
signed char var_8 = (signed char)83;
unsigned char var_9 = (unsigned char)140;
int var_10 = -1324866801;
int var_11 = -834011690;
int var_12 = -664387023;
int zero = 0;
int var_13 = 1830190592;
signed char var_14 = (signed char)-27;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)3;
_Bool var_17 = (_Bool)1;
short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)14844;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
