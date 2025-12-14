#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned char var_1 = (unsigned char)232;
unsigned int var_3 = 2941050690U;
unsigned short var_6 = (unsigned short)31775;
unsigned int var_8 = 2383478490U;
unsigned short var_10 = (unsigned short)25187;
unsigned short var_12 = (unsigned short)21320;
unsigned long long int var_13 = 4243762839610611091ULL;
unsigned short var_14 = (unsigned short)21264;
unsigned char var_15 = (unsigned char)207;
unsigned int var_16 = 734808574U;
int zero = 0;
short var_18 = (short)9295;
unsigned int var_19 = 1386413154U;
unsigned char var_20 = (unsigned char)73;
unsigned char var_21 = (unsigned char)72;
unsigned short var_22 = (unsigned short)18645;
unsigned char arr_0 [25] ;
short arr_1 [25] ;
int arr_2 [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)3992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 444053884;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 9625336331957544435ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
