#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14690329880679538528ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)32481;
unsigned short var_11 = (unsigned short)37271;
int zero = 0;
unsigned short var_12 = (unsigned short)3937;
unsigned int var_13 = 2716093823U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
