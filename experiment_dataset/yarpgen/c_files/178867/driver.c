#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)250;
unsigned long long int var_13 = 18242858001493928583ULL;
long long int var_14 = -6728574535052952385LL;
unsigned short var_15 = (unsigned short)45269;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)6307;
long long int var_20 = 6362262227822764520LL;
void init() {
}

void checksum() {
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
