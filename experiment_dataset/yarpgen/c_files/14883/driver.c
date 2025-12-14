#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2165138082944686408LL;
_Bool var_4 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)65080;
short var_11 = (short)-3060;
unsigned long long int var_13 = 15653387282366703112ULL;
unsigned short var_16 = (unsigned short)24550;
unsigned short var_17 = (unsigned short)19256;
int zero = 0;
unsigned short var_20 = (unsigned short)48129;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 9895953052306331165ULL;
unsigned long long int var_23 = 10578751516569337804ULL;
unsigned int var_24 = 1090319827U;
long long int arr_0 [12] ;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2963321632293859838LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)7;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
