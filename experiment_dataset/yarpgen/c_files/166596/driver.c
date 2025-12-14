#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17702707356989629186ULL;
unsigned int var_2 = 211068239U;
unsigned char var_5 = (unsigned char)66;
unsigned char var_6 = (unsigned char)186;
unsigned char var_7 = (unsigned char)141;
int var_9 = -1600062184;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-4020;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6023368782915146380LL;
int var_14 = -632320406;
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
