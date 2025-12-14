#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3589620267095166179LL;
unsigned char var_12 = (unsigned char)56;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)24920;
unsigned long long int var_20 = 18028399541771377260ULL;
unsigned int var_21 = 201268859U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
