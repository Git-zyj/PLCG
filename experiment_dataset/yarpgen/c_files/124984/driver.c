#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6360;
short var_4 = (short)-19910;
signed char var_6 = (signed char)-82;
int var_8 = -1925501956;
int zero = 0;
unsigned int var_12 = 2143354124U;
unsigned int var_13 = 692394282U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4909560488669747132ULL;
short var_16 = (short)3323;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
