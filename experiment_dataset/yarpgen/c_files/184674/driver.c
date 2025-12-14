#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
unsigned short var_4 = (unsigned short)42890;
unsigned int var_5 = 2656052218U;
unsigned long long int var_8 = 14945455639298167095ULL;
int zero = 0;
unsigned long long int var_11 = 14243929575425011163ULL;
unsigned char var_12 = (unsigned char)121;
long long int var_13 = 3108486234995548036LL;
unsigned long long int var_14 = 16617898266908467697ULL;
unsigned long long int var_15 = 16613380554773139226ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned long long int arr_3 [16] [16] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1693284896262194446ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 15936580240348078767ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 4769553760240235570LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
