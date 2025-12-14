#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 2025077207;
signed char var_6 = (signed char)98;
int var_10 = -1101469533;
long long int var_19 = 6113500109690168358LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-13393;
short var_22 = (short)-16557;
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
