#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned long long int var_1 = 5328288087070605014ULL;
signed char var_3 = (signed char)-107;
unsigned long long int var_4 = 290052388696548311ULL;
long long int var_10 = 3183503134145744714LL;
long long int var_14 = 4046553396858691671LL;
long long int var_15 = 6938319096044993631LL;
int zero = 0;
signed char var_16 = (signed char)118;
unsigned char var_17 = (unsigned char)250;
int var_18 = -605473326;
int var_19 = 1433472451;
signed char arr_0 [13] [13] ;
int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -418663197;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
