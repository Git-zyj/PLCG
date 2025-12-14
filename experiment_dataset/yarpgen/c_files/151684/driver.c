#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5666427940797623557LL;
unsigned long long int var_4 = 179064969036769212ULL;
long long int var_8 = -8268104575670470805LL;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)65;
long long int var_14 = -4019299842304721787LL;
int zero = 0;
int var_18 = 1503995802;
unsigned short var_19 = (unsigned short)38745;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
