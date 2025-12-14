#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8536098331860762060ULL;
long long int var_11 = -2144279806494647554LL;
int zero = 0;
unsigned int var_12 = 2850191941U;
unsigned int var_13 = 366681212U;
unsigned short var_14 = (unsigned short)26613;
unsigned long long int var_15 = 16225153428685654787ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
