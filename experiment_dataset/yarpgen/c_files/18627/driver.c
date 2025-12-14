#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1674540924;
long long int var_1 = 7873080920361503142LL;
short var_2 = (short)30895;
unsigned char var_4 = (unsigned char)212;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)185;
long long int var_8 = 5414776657144895430LL;
int var_9 = 709178283;
unsigned int var_10 = 2532518806U;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -988154545;
int var_13 = -506743712;
unsigned char var_14 = (unsigned char)181;
unsigned long long int var_15 = 9741301062116033949ULL;
long long int var_16 = 6282146017078335694LL;
unsigned int var_17 = 2995146922U;
unsigned char var_18 = (unsigned char)83;
int var_19 = -1680433435;
unsigned short var_20 = (unsigned short)28791;
int arr_2 [16] ;
unsigned int arr_13 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1493995984 : -806751143;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 1763626760U : 2605624052U;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
