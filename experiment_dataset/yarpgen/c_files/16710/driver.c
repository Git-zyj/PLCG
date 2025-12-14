#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28712;
unsigned char var_5 = (unsigned char)46;
unsigned short var_6 = (unsigned short)38477;
unsigned short var_9 = (unsigned short)33586;
unsigned long long int var_10 = 16227461859897514243ULL;
unsigned short var_11 = (unsigned short)35881;
unsigned long long int var_16 = 8437593639462124647ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)54467;
unsigned int var_20 = 2261450168U;
long long int var_21 = 9214096045426677242LL;
unsigned char var_22 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
