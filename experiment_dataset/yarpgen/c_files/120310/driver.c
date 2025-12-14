#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)250;
long long int var_3 = 980980548926060313LL;
long long int var_7 = -3191885807083317014LL;
unsigned long long int var_8 = 9421381475244812545ULL;
long long int var_9 = 8997300433276637724LL;
int zero = 0;
unsigned short var_12 = (unsigned short)8745;
short var_13 = (short)23337;
unsigned short var_14 = (unsigned short)53045;
unsigned char var_15 = (unsigned char)99;
unsigned char var_16 = (unsigned char)94;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
