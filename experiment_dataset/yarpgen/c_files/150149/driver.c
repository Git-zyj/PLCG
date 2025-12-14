#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 795535281;
unsigned long long int var_7 = 15152219887812682597ULL;
unsigned char var_10 = (unsigned char)106;
unsigned long long int var_11 = 4880022328303574832ULL;
long long int var_12 = 862769193805690112LL;
signed char var_14 = (signed char)-44;
int zero = 0;
signed char var_19 = (signed char)38;
short var_20 = (short)14104;
unsigned char var_21 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
