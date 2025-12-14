#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 772133698;
signed char var_3 = (signed char)47;
unsigned char var_11 = (unsigned char)156;
unsigned char var_12 = (unsigned char)244;
int var_13 = -1479111952;
unsigned char var_16 = (unsigned char)10;
int zero = 0;
int var_17 = 1138890919;
unsigned char var_18 = (unsigned char)19;
unsigned int var_19 = 3269617335U;
short var_20 = (short)-20067;
unsigned char arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)217;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
