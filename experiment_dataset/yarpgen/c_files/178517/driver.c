#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)67;
unsigned long long int var_12 = 11505601083017600255ULL;
unsigned long long int var_15 = 4434228405965293457ULL;
int zero = 0;
short var_18 = (short)-3920;
unsigned char var_19 = (unsigned char)111;
int var_20 = -32310063;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
