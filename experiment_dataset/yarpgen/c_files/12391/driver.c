#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1454700943;
long long int var_2 = -5905208033810809743LL;
unsigned long long int var_3 = 10882314844099290857ULL;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-125;
unsigned short var_10 = (unsigned short)12622;
unsigned char var_11 = (unsigned char)18;
unsigned short var_13 = (unsigned short)44244;
int var_18 = -1619316954;
int zero = 0;
unsigned short var_19 = (unsigned short)33486;
unsigned short var_20 = (unsigned short)16001;
unsigned long long int var_21 = 921703018162566392ULL;
signed char var_22 = (signed char)9;
long long int var_23 = 4839833129387620115LL;
unsigned char var_24 = (unsigned char)4;
unsigned short arr_0 [18] [18] ;
unsigned short arr_1 [18] [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)13691;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)49546;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
