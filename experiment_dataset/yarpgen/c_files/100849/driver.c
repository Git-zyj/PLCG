#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned char var_1 = (unsigned char)124;
unsigned char var_2 = (unsigned char)178;
long long int var_5 = 1060293388837871777LL;
unsigned int var_12 = 1034000666U;
int zero = 0;
long long int var_13 = 4282885452971807795LL;
unsigned int var_14 = 4075565317U;
long long int var_15 = 1424047583772884963LL;
void init() {
}

void checksum() {
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
