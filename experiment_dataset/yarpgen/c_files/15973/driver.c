#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
short var_2 = (short)-16968;
unsigned short var_3 = (unsigned short)46313;
unsigned short var_7 = (unsigned short)40079;
int var_10 = 373944839;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)66;
unsigned int var_13 = 1142616335U;
signed char var_14 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
