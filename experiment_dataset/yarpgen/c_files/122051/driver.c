#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)8590;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-52;
unsigned char var_14 = (unsigned char)122;
int zero = 0;
int var_20 = 934680463;
unsigned int var_21 = 3296191914U;
_Bool var_22 = (_Bool)1;
long long int var_23 = -209686032797181541LL;
unsigned short var_24 = (unsigned short)23595;
signed char arr_0 [13] [13] ;
long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -4080028210887670697LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
