#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
unsigned int var_1 = 2499229302U;
int var_2 = -853424781;
unsigned int var_4 = 3749993599U;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 17992639637055257040ULL;
unsigned long long int var_13 = 15580548978707410736ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
