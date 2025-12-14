#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned short var_1 = (unsigned short)34931;
unsigned long long int var_3 = 16890411210944328721ULL;
long long int var_5 = -3597006806444854186LL;
short var_6 = (short)-14765;
unsigned long long int var_7 = 2803006834167533112ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)13669;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
