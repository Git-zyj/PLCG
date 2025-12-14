#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50063;
signed char var_1 = (signed char)-81;
signed char var_2 = (signed char)-27;
int var_4 = 1292303191;
int var_5 = 1142378039;
long long int var_7 = 8866759126351126803LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)25467;
unsigned int var_14 = 909622451U;
unsigned char var_15 = (unsigned char)106;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1863280840U;
unsigned long long int var_18 = 1310535646262710688ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
