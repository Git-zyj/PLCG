#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1586437125;
signed char var_3 = (signed char)3;
unsigned char var_9 = (unsigned char)68;
unsigned char var_12 = (unsigned char)132;
int zero = 0;
unsigned char var_17 = (unsigned char)4;
unsigned long long int var_18 = 17725501011878486608ULL;
long long int var_19 = 3479530334138084298LL;
unsigned int var_20 = 1929833409U;
unsigned int var_21 = 1047513390U;
unsigned long long int var_22 = 8488438776892456405ULL;
long long int arr_0 [25] ;
short arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -3845027659580456078LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)9194;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)61140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 2634847122U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
