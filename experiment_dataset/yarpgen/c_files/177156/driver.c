#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11172364828628090617ULL;
signed char var_7 = (signed char)-117;
unsigned long long int var_10 = 10123788034415980368ULL;
short var_14 = (short)-1996;
int zero = 0;
unsigned char var_17 = (unsigned char)84;
short var_18 = (short)11138;
unsigned short var_19 = (unsigned short)11256;
unsigned long long int arr_1 [24] [24] ;
_Bool arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 7638885391360152176ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
