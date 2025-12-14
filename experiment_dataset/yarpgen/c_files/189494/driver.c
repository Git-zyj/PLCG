#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7496404357228985897LL;
unsigned char var_4 = (unsigned char)158;
long long int var_12 = 8115363836561406677LL;
int var_17 = 432590955;
int zero = 0;
unsigned char var_18 = (unsigned char)157;
signed char var_19 = (signed char)-1;
short var_20 = (short)10782;
unsigned long long int var_21 = 12008449020312059098ULL;
int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1558386961;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
