#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-36;
unsigned char var_2 = (unsigned char)167;
unsigned int var_3 = 2770901682U;
unsigned char var_5 = (unsigned char)132;
unsigned char var_6 = (unsigned char)246;
unsigned char var_9 = (unsigned char)138;
unsigned char var_10 = (unsigned char)45;
signed char var_11 = (signed char)61;
unsigned char var_12 = (unsigned char)252;
long long int var_13 = 317515370918536170LL;
int zero = 0;
signed char var_14 = (signed char)107;
unsigned long long int var_15 = 6619607128981831522ULL;
unsigned short var_16 = (unsigned short)50136;
int var_17 = -1673351791;
_Bool var_18 = (_Bool)0;
unsigned char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)159;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
