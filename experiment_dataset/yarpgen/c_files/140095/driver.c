#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27104;
unsigned int var_3 = 1400792184U;
unsigned long long int var_5 = 3386493203332094900ULL;
unsigned short var_6 = (unsigned short)54975;
unsigned char var_8 = (unsigned char)233;
signed char var_12 = (signed char)-39;
signed char var_17 = (signed char)78;
int zero = 0;
unsigned long long int var_18 = 9426295789662656323ULL;
short var_19 = (short)9840;
unsigned char var_20 = (unsigned char)119;
signed char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
