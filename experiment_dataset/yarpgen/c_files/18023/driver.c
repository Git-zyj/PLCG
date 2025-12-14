#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)194;
short var_3 = (short)-18651;
unsigned char var_4 = (unsigned char)180;
unsigned char var_8 = (unsigned char)197;
short var_9 = (short)10787;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 9656025224552721171ULL;
int var_14 = 2007162810;
unsigned long long int var_15 = 1804772750116523763ULL;
unsigned int var_16 = 1879065074U;
unsigned int var_17 = 3676584896U;
int zero = 0;
long long int var_18 = 6056878903237663973LL;
int var_19 = 603676507;
signed char var_20 = (signed char)95;
int var_21 = 834322128;
unsigned short var_22 = (unsigned short)45851;
long long int arr_1 [15] ;
int arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 7405914889710579475LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1683508504;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
