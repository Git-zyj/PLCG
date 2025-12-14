#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -48331081943171065LL;
signed char var_10 = (signed char)126;
unsigned short var_13 = (unsigned short)48494;
unsigned int var_18 = 1863665958U;
int zero = 0;
long long int var_19 = 8349991176801194187LL;
short var_20 = (short)-13395;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
