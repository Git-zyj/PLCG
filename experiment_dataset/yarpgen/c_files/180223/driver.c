#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3925920678U;
signed char var_10 = (signed char)21;
int var_15 = 926530179;
int zero = 0;
unsigned short var_17 = (unsigned short)47887;
signed char var_18 = (signed char)0;
int var_19 = 1479528439;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
