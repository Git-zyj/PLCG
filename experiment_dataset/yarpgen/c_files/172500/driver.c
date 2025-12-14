#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)119;
unsigned int var_14 = 489260440U;
int zero = 0;
unsigned int var_15 = 640287243U;
unsigned short var_16 = (unsigned short)2889;
int var_17 = -71228687;
unsigned long long int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 17628821045702635214ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
