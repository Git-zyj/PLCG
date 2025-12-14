#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17501;
unsigned long long int var_7 = 11700555345371443669ULL;
short var_8 = (short)2570;
unsigned char var_9 = (unsigned char)72;
short var_10 = (short)29669;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-21329;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_18 = 1377938576504064998LL;
short var_19 = (short)23345;
short var_20 = (short)5139;
unsigned int var_21 = 667978590U;
unsigned int arr_0 [14] ;
unsigned char arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2207688725U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)253;
}

void checksum() {
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
