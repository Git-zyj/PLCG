#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -282777698;
int var_1 = -502140185;
int var_2 = -320770455;
short var_5 = (short)-25463;
long long int var_16 = -7993436462977866503LL;
int zero = 0;
unsigned short var_18 = (unsigned short)17497;
long long int var_19 = 3520970142733250769LL;
signed char var_20 = (signed char)20;
unsigned char var_21 = (unsigned char)21;
int var_22 = 357901261;
signed char var_23 = (signed char)-63;
int var_24 = -809397223;
unsigned short arr_2 [24] ;
unsigned int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)14648;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2992136919U;
}

void checksum() {
    hash(&seed, var_18);
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
