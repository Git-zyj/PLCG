#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)61802;
unsigned long long int var_4 = 4150070642643700617ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16642864535406858892ULL;
int zero = 0;
short var_12 = (short)-27614;
int var_13 = 444502560;
int var_14 = -2006503857;
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
