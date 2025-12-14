#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17820123465976096180ULL;
unsigned short var_5 = (unsigned short)4049;
_Bool var_7 = (_Bool)0;
short var_14 = (short)32006;
unsigned short var_15 = (unsigned short)17814;
int var_16 = 658835836;
unsigned long long int var_17 = 9611544311036864184ULL;
int zero = 0;
unsigned long long int var_18 = 16800850852607023580ULL;
unsigned char var_19 = (unsigned char)84;
short var_20 = (short)-12271;
_Bool arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
