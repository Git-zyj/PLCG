#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3666605154U;
long long int var_3 = -663060295096634855LL;
short var_4 = (short)-29702;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)231;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 1475692883829396108LL;
unsigned char var_12 = (unsigned char)25;
unsigned char var_13 = (unsigned char)113;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
