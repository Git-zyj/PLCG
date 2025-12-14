#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned long long int var_3 = 14936769346865501921ULL;
long long int var_9 = 1089065656277854533LL;
int zero = 0;
unsigned long long int var_12 = 6521249934794452703ULL;
unsigned short var_13 = (unsigned short)37263;
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
