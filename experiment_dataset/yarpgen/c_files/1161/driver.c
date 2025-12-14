#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)77;
_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_12 = (short)7228;
unsigned int var_17 = 4004650720U;
short var_18 = (short)21665;
int zero = 0;
unsigned char var_19 = (unsigned char)111;
unsigned int var_20 = 2211903722U;
unsigned int var_21 = 1841551272U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
