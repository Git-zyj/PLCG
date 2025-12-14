#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned long long int var_2 = 5588967211540479372ULL;
unsigned long long int var_5 = 15336749004462345404ULL;
unsigned long long int var_9 = 16412555664498886338ULL;
long long int var_11 = -594710000664763770LL;
int zero = 0;
unsigned short var_14 = (unsigned short)27747;
long long int var_15 = 8146453565727806423LL;
unsigned short var_16 = (unsigned short)17439;
unsigned short var_17 = (unsigned short)13590;
unsigned long long int arr_0 [24] [24] ;
int arr_1 [24] ;
unsigned long long int arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 11590607204784818329ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1829543261;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 4368356211283130210ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
