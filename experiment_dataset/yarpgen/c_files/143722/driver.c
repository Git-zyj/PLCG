#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_7 = (short)-12555;
unsigned char var_11 = (unsigned char)28;
long long int var_12 = 7256105372631612531LL;
unsigned long long int var_16 = 12853132896044688341ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)168;
int var_18 = 2140334680;
unsigned int var_19 = 2268927215U;
unsigned long long int var_20 = 2488319306365587755ULL;
unsigned long long int var_21 = 15656595266280792942ULL;
unsigned char arr_0 [19] ;
_Bool arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
