#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)193;
long long int var_6 = -2546046997916658752LL;
unsigned long long int var_10 = 17991759140529582385ULL;
int var_12 = 803757938;
int zero = 0;
int var_15 = 1177216391;
long long int var_16 = -3880111610503740464LL;
long long int var_17 = 3605043875853334198LL;
unsigned long long int var_18 = 2416259471884941922ULL;
long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -9046916719548026030LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
