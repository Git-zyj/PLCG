#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3930;
long long int var_2 = -7578666822130707941LL;
long long int var_6 = 3627470543471594283LL;
unsigned long long int var_13 = 10433162561222397559ULL;
int zero = 0;
short var_16 = (short)18116;
long long int var_17 = -4762714976181221876LL;
unsigned long long int var_18 = 17647505422157994770ULL;
short var_19 = (short)22277;
unsigned char var_20 = (unsigned char)91;
int arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -244707751;
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
