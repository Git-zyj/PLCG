#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -675180985;
unsigned long long int var_7 = 18233273855759987573ULL;
unsigned long long int var_9 = 13167104910626083870ULL;
int zero = 0;
unsigned long long int var_16 = 16117229383503996086ULL;
unsigned long long int var_17 = 16194935360659204024ULL;
unsigned char var_18 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
