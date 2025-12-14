#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16666;
long long int var_1 = 1198854220308355406LL;
long long int var_7 = 7194697891535677572LL;
unsigned char var_8 = (unsigned char)236;
short var_10 = (short)10026;
int var_12 = -406794719;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_15 = -2495228107753683974LL;
signed char var_16 = (signed char)-13;
signed char var_17 = (signed char)-37;
unsigned char var_18 = (unsigned char)148;
unsigned char var_19 = (unsigned char)228;
unsigned short var_20 = (unsigned short)13812;
int var_21 = -1081469910;
unsigned int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 890176398U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 9220993805209538703ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)10;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
