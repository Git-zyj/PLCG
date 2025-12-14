#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 981842514U;
unsigned short var_3 = (unsigned short)26227;
short var_6 = (short)22196;
_Bool var_8 = (_Bool)1;
short var_10 = (short)2546;
unsigned char var_11 = (unsigned char)133;
int zero = 0;
long long int var_16 = 5661577351714272325LL;
short var_17 = (short)-10303;
long long int var_18 = 1295253941879769150LL;
void init() {
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
