#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
short var_1 = (short)-31176;
short var_2 = (short)-7133;
short var_4 = (short)-27804;
int var_5 = 151303085;
unsigned char var_6 = (unsigned char)150;
signed char var_7 = (signed char)-36;
unsigned short var_8 = (unsigned short)16440;
unsigned char var_9 = (unsigned char)135;
int zero = 0;
short var_10 = (short)-27516;
unsigned int var_11 = 4117107170U;
short var_12 = (short)5528;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9847798514617109334ULL;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] [11] ;
unsigned char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7126481082444460785ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 14712104079888957581ULL : 2723089904216840214ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)167;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
