#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20502;
signed char var_8 = (signed char)71;
long long int var_9 = -5097151709942445281LL;
int var_10 = 1257627614;
short var_13 = (short)6144;
int zero = 0;
unsigned short var_18 = (unsigned short)4015;
unsigned int var_19 = 3386959490U;
short var_20 = (short)-11030;
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
