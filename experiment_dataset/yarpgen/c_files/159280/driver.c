#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18904;
short var_2 = (short)2814;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)49;
unsigned char var_8 = (unsigned char)82;
int var_13 = 1071479674;
int zero = 0;
unsigned long long int var_15 = 6027542890199220519ULL;
unsigned int var_16 = 3716415697U;
unsigned long long int var_17 = 94728681599075027ULL;
short var_18 = (short)8690;
unsigned short var_19 = (unsigned short)10263;
int var_20 = -1371211492;
int var_21 = 414544206;
int arr_6 [11] ;
long long int arr_13 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 131208753;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 5638727399816857006LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
