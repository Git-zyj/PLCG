#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_10 = (unsigned char)191;
unsigned short var_11 = (unsigned short)40839;
unsigned short var_13 = (unsigned short)20647;
int zero = 0;
unsigned char var_16 = (unsigned char)137;
unsigned char var_17 = (unsigned char)85;
unsigned long long int var_18 = 11667357216408063200ULL;
unsigned short var_19 = (unsigned short)9725;
int var_20 = -751571583;
unsigned short arr_1 [10] ;
unsigned short arr_2 [10] ;
unsigned short arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)16934;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50484 : (unsigned short)22475;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60231 : (unsigned short)40543;
}

void checksum() {
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
