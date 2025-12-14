#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39938;
unsigned char var_2 = (unsigned char)207;
short var_8 = (short)25511;
short var_11 = (short)-28575;
short var_14 = (short)15881;
int zero = 0;
unsigned short var_19 = (unsigned short)26248;
long long int var_20 = -1097057499370572924LL;
int var_21 = -1937751823;
unsigned char var_22 = (unsigned char)186;
short var_23 = (short)8921;
unsigned char var_24 = (unsigned char)224;
short arr_0 [19] ;
long long int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8793243339782922396LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)52966;
}

void checksum() {
    hash(&seed, var_19);
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
