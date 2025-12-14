#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
short var_7 = (short)-29804;
unsigned char var_11 = (unsigned char)181;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 1644741767U;
unsigned short var_17 = (unsigned short)50972;
unsigned long long int var_18 = 1240995931663167199ULL;
int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2105661082;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
