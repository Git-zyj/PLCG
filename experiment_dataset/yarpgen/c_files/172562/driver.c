#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)247;
unsigned char var_3 = (unsigned char)244;
unsigned char var_5 = (unsigned char)207;
unsigned char var_7 = (unsigned char)166;
unsigned long long int var_8 = 382505262710879454ULL;
unsigned char var_10 = (unsigned char)168;
unsigned long long int var_11 = 15480859421721756519ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)220;
unsigned char var_15 = (unsigned char)168;
unsigned long long int var_16 = 12090430269427784624ULL;
unsigned char var_17 = (unsigned char)117;
unsigned char var_18 = (unsigned char)226;
unsigned char arr_0 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 17983440871522118905ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
