#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3015091502864502526LL;
long long int var_1 = 7978491858499881189LL;
unsigned long long int var_2 = 1852200683891749096ULL;
unsigned short var_7 = (unsigned short)55835;
unsigned char var_11 = (unsigned char)104;
unsigned short var_16 = (unsigned short)48649;
int zero = 0;
unsigned long long int var_20 = 6633316370345811025ULL;
long long int var_21 = 6843003503969205367LL;
unsigned char var_22 = (unsigned char)207;
void init() {
}

void checksum() {
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
