#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7077485860390105689ULL;
unsigned long long int var_3 = 7635252704160676339ULL;
unsigned char var_4 = (unsigned char)75;
unsigned char var_5 = (unsigned char)61;
unsigned char var_6 = (unsigned char)100;
unsigned long long int var_8 = 4057083943299783264ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned char var_11 = (unsigned char)118;
unsigned long long int var_12 = 3254055868167211580ULL;
unsigned char var_13 = (unsigned char)180;
unsigned long long int var_14 = 4067473013925326711ULL;
unsigned char var_15 = (unsigned char)3;
unsigned short var_16 = (unsigned short)51812;
long long int arr_0 [14] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -6177547907886432962LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)230;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
