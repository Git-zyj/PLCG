#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6747351127455449078LL;
long long int var_4 = 1348304385714609785LL;
short var_8 = (short)-22316;
signed char var_9 = (signed char)-117;
unsigned char var_15 = (unsigned char)44;
int zero = 0;
unsigned short var_16 = (unsigned short)45413;
unsigned short var_17 = (unsigned short)33816;
signed char var_18 = (signed char)52;
signed char var_19 = (signed char)-85;
signed char var_20 = (signed char)-78;
unsigned long long int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 14543695002626912646ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)15866;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)30302;
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
