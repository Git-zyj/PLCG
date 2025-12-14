#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5896560098457413834LL;
long long int var_3 = -4487857074038289225LL;
_Bool var_8 = (_Bool)1;
long long int var_11 = -5264185008467471004LL;
unsigned long long int var_14 = 6931630737537760966ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)146;
unsigned long long int var_20 = 949357864457889739ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
