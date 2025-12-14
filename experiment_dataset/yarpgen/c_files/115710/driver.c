#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)27;
unsigned char var_10 = (unsigned char)12;
_Bool var_12 = (_Bool)1;
int var_16 = -667625407;
int zero = 0;
unsigned long long int var_19 = 15226695124157667519ULL;
unsigned long long int var_20 = 13588696398451559900ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)253;
_Bool arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
