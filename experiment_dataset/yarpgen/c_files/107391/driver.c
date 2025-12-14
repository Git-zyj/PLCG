#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2502;
long long int var_1 = -5080991566846366622LL;
unsigned int var_4 = 2694683817U;
short var_5 = (short)9042;
unsigned short var_7 = (unsigned short)33368;
unsigned short var_11 = (unsigned short)60225;
int zero = 0;
long long int var_12 = 2092620261810466601LL;
long long int var_13 = 458679123760070059LL;
unsigned int var_14 = 777273072U;
unsigned int var_15 = 2790629188U;
unsigned char var_16 = (unsigned char)39;
short arr_2 [18] [18] ;
unsigned int arr_4 [18] ;
unsigned int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-5359;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 3677435167U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 626537781U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
