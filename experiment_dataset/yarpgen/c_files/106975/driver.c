#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)38;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1900478739719017964ULL;
long long int var_3 = -5823624172275621633LL;
unsigned short var_4 = (unsigned short)60694;
unsigned long long int var_10 = 6478753779120088845ULL;
unsigned short var_14 = (unsigned short)2191;
unsigned short var_15 = (unsigned short)19004;
unsigned short var_18 = (unsigned short)2181;
int zero = 0;
unsigned long long int var_20 = 12847355094006879914ULL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)22048;
unsigned char var_23 = (unsigned char)35;
unsigned short var_24 = (unsigned short)34385;
long long int var_25 = 442947757962165671LL;
unsigned long long int arr_0 [13] ;
_Bool arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2046439038014745319ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
