#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10151;
long long int var_2 = 5346151381663623277LL;
unsigned int var_7 = 895999708U;
int zero = 0;
unsigned int var_10 = 4126481759U;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5663673080048597238ULL;
signed char var_13 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
