#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
int var_1 = -104432674;
unsigned char var_4 = (unsigned char)21;
int var_5 = -1800849220;
signed char var_7 = (signed char)111;
signed char var_11 = (signed char)97;
signed char var_12 = (signed char)-106;
unsigned char var_14 = (unsigned char)174;
int zero = 0;
unsigned char var_15 = (unsigned char)181;
short var_16 = (short)-21640;
signed char var_17 = (signed char)53;
int var_18 = -1140319283;
unsigned char var_19 = (unsigned char)165;
short var_20 = (short)-32598;
int var_21 = 19503103;
unsigned char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)165;
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
