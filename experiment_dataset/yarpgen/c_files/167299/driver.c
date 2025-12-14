#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2895969999720654584LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)340;
int zero = 0;
unsigned short var_10 = (unsigned short)3169;
short var_11 = (short)18850;
unsigned int var_12 = 2762133315U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
