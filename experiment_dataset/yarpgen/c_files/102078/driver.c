#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2971191175702949185LL;
unsigned char var_2 = (unsigned char)229;
unsigned char var_3 = (unsigned char)70;
unsigned short var_5 = (unsigned short)42471;
short var_6 = (short)6254;
int var_9 = -93266113;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 8690945147798224935LL;
unsigned char var_15 = (unsigned char)132;
unsigned long long int var_16 = 11719038993219337152ULL;
unsigned char var_17 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
