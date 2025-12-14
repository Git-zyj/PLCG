#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8131977352701003079LL;
unsigned int var_4 = 2804427408U;
long long int var_6 = -5544570586938111448LL;
unsigned char var_7 = (unsigned char)55;
int zero = 0;
unsigned long long int var_12 = 16899915790151691952ULL;
signed char var_13 = (signed char)-105;
unsigned int var_14 = 3915542716U;
unsigned short var_15 = (unsigned short)11984;
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
