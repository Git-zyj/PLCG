#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)137;
long long int var_16 = -4664615839640088009LL;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
unsigned int var_20 = 3737251078U;
short var_21 = (short)-9829;
unsigned char var_22 = (unsigned char)64;
unsigned long long int var_23 = 17504266150179641950ULL;
signed char var_24 = (signed char)-27;
unsigned char var_25 = (unsigned char)33;
unsigned char arr_1 [16] ;
unsigned int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2866384696U : 3260625570U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
