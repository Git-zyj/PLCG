#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -154648022;
long long int var_11 = 3134004892626702570LL;
int var_17 = 569470160;
int zero = 0;
long long int var_18 = 5958761526384566589LL;
unsigned char var_19 = (unsigned char)147;
unsigned short var_20 = (unsigned short)21401;
int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -182808447;
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
