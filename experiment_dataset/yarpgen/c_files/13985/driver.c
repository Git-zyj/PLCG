#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1698216393;
long long int var_2 = 7538032835093350735LL;
short var_5 = (short)12023;
long long int var_6 = -4368272375408564088LL;
int zero = 0;
int var_10 = -1293733649;
_Bool var_11 = (_Bool)1;
long long int var_12 = -6773912188238305023LL;
unsigned int var_13 = 2354942071U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
