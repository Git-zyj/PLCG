#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17720;
long long int var_1 = 5200012331723675211LL;
unsigned char var_8 = (unsigned char)122;
int var_10 = -602254823;
unsigned char var_13 = (unsigned char)166;
int zero = 0;
long long int var_15 = -1952463896302286828LL;
int var_16 = 333762194;
long long int var_17 = 7142242241990102984LL;
short var_18 = (short)17729;
int var_19 = 2095530323;
unsigned int var_20 = 497780548U;
signed char arr_2 [21] ;
unsigned int arr_3 [21] ;
unsigned int arr_4 [21] ;
unsigned long long int arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 2689437761U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 258492309U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 3590866995120791098ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
