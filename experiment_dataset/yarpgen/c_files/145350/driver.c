#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1778472799;
unsigned long long int var_10 = 2961700738217946109ULL;
unsigned char var_12 = (unsigned char)37;
int var_13 = -1066972097;
long long int var_16 = 4210626064390550444LL;
int zero = 0;
unsigned char var_17 = (unsigned char)31;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
