#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
unsigned long long int var_4 = 12491831355183836548ULL;
signed char var_8 = (signed char)-119;
int zero = 0;
unsigned int var_10 = 7877949U;
unsigned long long int var_11 = 764474286667981944ULL;
short var_12 = (short)-15223;
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
