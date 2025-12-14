#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1558188774;
unsigned short var_3 = (unsigned short)28565;
unsigned short var_7 = (unsigned short)5712;
unsigned short var_8 = (unsigned short)26706;
unsigned short var_9 = (unsigned short)24926;
unsigned short var_13 = (unsigned short)56517;
unsigned char var_14 = (unsigned char)18;
int zero = 0;
unsigned short var_16 = (unsigned short)31295;
unsigned int var_17 = 607082118U;
int var_18 = -580687938;
unsigned short var_19 = (unsigned short)25095;
unsigned int var_20 = 2451619264U;
unsigned short var_21 = (unsigned short)61219;
unsigned long long int arr_0 [14] [14] ;
_Bool arr_1 [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 7916756113121818278ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
