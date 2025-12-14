#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1031751460;
unsigned long long int var_1 = 9749534238600939413ULL;
unsigned int var_2 = 1062938403U;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)165;
int zero = 0;
long long int var_12 = 7404981071796041386LL;
unsigned char var_13 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
