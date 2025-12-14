#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2427299930U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 16429004052103477936ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)54098;
signed char var_16 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
