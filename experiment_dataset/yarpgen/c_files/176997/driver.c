#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)239;
unsigned long long int var_3 = 7255419458758285129ULL;
unsigned char var_5 = (unsigned char)54;
unsigned char var_9 = (unsigned char)153;
long long int var_11 = -4558033571102483678LL;
unsigned short var_12 = (unsigned short)54258;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2320655503U;
unsigned long long int var_15 = 9647870088319365414ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
