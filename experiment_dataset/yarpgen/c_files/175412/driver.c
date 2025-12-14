#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31784;
short var_3 = (short)27743;
unsigned long long int var_6 = 8690451732258256648ULL;
unsigned short var_10 = (unsigned short)4559;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)69;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 680512121561828588ULL;
unsigned short arr_0 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)2390;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
