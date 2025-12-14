#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43318;
int var_4 = 1842646249;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 1566861730U;
unsigned long long int var_10 = 16637575500910844824ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)173;
long long int var_12 = -5454643476358521951LL;
short var_13 = (short)26377;
short var_14 = (short)4651;
void init() {
}

void checksum() {
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
