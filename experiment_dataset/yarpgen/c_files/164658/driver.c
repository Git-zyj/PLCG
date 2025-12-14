#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1474382117;
unsigned long long int var_3 = 17191584114364287089ULL;
unsigned long long int var_18 = 10645257863308132440ULL;
int zero = 0;
long long int var_20 = 1347917288974045664LL;
unsigned short var_21 = (unsigned short)14962;
int var_22 = 1307777920;
unsigned long long int var_23 = 13353287333604796470ULL;
unsigned long long int var_24 = 6979488212155451583ULL;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -2009608757;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
