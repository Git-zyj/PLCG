#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6976;
unsigned short var_3 = (unsigned short)350;
short var_6 = (short)-62;
unsigned char var_7 = (unsigned char)72;
unsigned long long int var_8 = 1941567520430069978ULL;
int zero = 0;
unsigned long long int var_10 = 3019282999876406267ULL;
unsigned long long int var_11 = 2466426505487706763ULL;
unsigned int var_12 = 344376101U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
