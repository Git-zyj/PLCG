#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 127218218;
int var_1 = -503739100;
int var_2 = 870302087;
unsigned int var_6 = 3533589136U;
unsigned int var_10 = 4114779166U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1575804787U;
int var_13 = -622081324;
int var_14 = -205394452;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
