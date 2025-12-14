#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50562;
unsigned long long int var_7 = 10638164770015595982ULL;
int var_11 = -1840697453;
short var_15 = (short)26913;
unsigned long long int var_16 = 13477575193051860536ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)84;
unsigned int var_21 = 1840838723U;
unsigned char var_22 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
