#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
signed char var_1 = (signed char)102;
unsigned char var_2 = (unsigned char)33;
unsigned char var_3 = (unsigned char)1;
unsigned int var_4 = 1094999886U;
short var_6 = (short)-9361;
unsigned int var_8 = 1771111508U;
int zero = 0;
unsigned char var_10 = (unsigned char)40;
unsigned int var_11 = 1916002621U;
short var_12 = (short)26080;
unsigned short var_13 = (unsigned short)52475;
long long int arr_1 [12] [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -775772658207360327LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3806195441345024805LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
