#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61624;
long long int var_2 = 7439947421775365553LL;
signed char var_13 = (signed char)-73;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
long long int var_17 = -2799097993643480402LL;
unsigned short var_18 = (unsigned short)4714;
unsigned short var_19 = (unsigned short)40759;
unsigned short var_20 = (unsigned short)52075;
signed char var_21 = (signed char)-43;
unsigned short var_22 = (unsigned short)48718;
unsigned char arr_2 [11] [11] ;
unsigned short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)33252;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
