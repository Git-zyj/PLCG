#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54201;
unsigned long long int var_3 = 580564776234497248ULL;
signed char var_4 = (signed char)124;
unsigned long long int var_15 = 5568043559131144974ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)32201;
short var_21 = (short)-6698;
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
