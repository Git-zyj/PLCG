#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7499007800135950767LL;
long long int var_5 = 5501481514667860377LL;
int var_6 = -474072055;
int var_9 = 495551279;
signed char var_10 = (signed char)0;
unsigned char var_11 = (unsigned char)1;
unsigned long long int var_12 = 13927697223083657107ULL;
int var_13 = -553010240;
signed char var_15 = (signed char)-98;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -2056473105;
unsigned char var_18 = (unsigned char)195;
int arr_0 [11] [11] ;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 307998400;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -298954050;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
