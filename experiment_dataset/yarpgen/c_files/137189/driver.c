#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6623446803496960757LL;
unsigned char var_3 = (unsigned char)78;
unsigned char var_15 = (unsigned char)77;
int zero = 0;
short var_18 = (short)6237;
int var_19 = 1376983216;
short var_20 = (short)16152;
unsigned char var_21 = (unsigned char)192;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -8262703790018251806LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
