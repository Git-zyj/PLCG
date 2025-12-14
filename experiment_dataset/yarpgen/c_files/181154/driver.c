#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)187;
unsigned int var_2 = 456874731U;
unsigned int var_6 = 2277985682U;
long long int var_11 = -1955390627703279088LL;
int zero = 0;
long long int var_12 = -4730196633561840705LL;
unsigned long long int var_13 = 10763243020807607629ULL;
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
