#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28517;
_Bool var_2 = (_Bool)0;
long long int var_3 = 8872060920406683368LL;
long long int var_4 = 7988772035402300858LL;
long long int var_5 = -3636144055688800677LL;
unsigned char var_6 = (unsigned char)24;
int var_7 = -2070177895;
unsigned char var_8 = (unsigned char)41;
unsigned long long int var_9 = 3814748278646826272ULL;
long long int var_10 = -8623325856493161437LL;
short var_12 = (short)-21956;
short var_13 = (short)-14019;
short var_16 = (short)13450;
signed char var_17 = (signed char)-47;
unsigned char var_18 = (unsigned char)126;
int zero = 0;
unsigned char var_20 = (unsigned char)98;
unsigned int var_21 = 1289045883U;
unsigned char var_22 = (unsigned char)197;
int var_23 = 1271906281;
signed char var_24 = (signed char)-102;
unsigned int var_25 = 4185739961U;
short arr_1 [19] ;
signed char arr_2 [19] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-10333;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)181;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
