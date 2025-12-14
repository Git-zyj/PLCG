#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7285657049907678750LL;
unsigned short var_1 = (unsigned short)16758;
unsigned int var_2 = 4015475831U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-87;
unsigned short var_8 = (unsigned short)20960;
int zero = 0;
unsigned short var_10 = (unsigned short)10582;
unsigned char var_11 = (unsigned char)185;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
