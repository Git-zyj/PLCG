#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned long long int var_8 = 5104589827196960278ULL;
unsigned char var_12 = (unsigned char)150;
int var_15 = 678996963;
unsigned long long int var_17 = 426942377579168180ULL;
int zero = 0;
unsigned long long int var_18 = 915642196291270368ULL;
unsigned char var_19 = (unsigned char)74;
short var_20 = (short)26128;
unsigned int arr_0 [23] [23] ;
_Bool arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 867502060U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
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
