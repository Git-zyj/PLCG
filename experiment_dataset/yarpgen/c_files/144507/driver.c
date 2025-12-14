#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2986199799646902299LL;
unsigned short var_2 = (unsigned short)20133;
unsigned int var_14 = 3337641550U;
unsigned short var_16 = (unsigned short)20707;
long long int var_18 = 3607863445073185914LL;
int zero = 0;
unsigned char var_20 = (unsigned char)6;
unsigned short var_21 = (unsigned short)21900;
void init() {
}

void checksum() {
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
