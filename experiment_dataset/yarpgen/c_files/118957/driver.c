#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 817970631U;
signed char var_5 = (signed char)117;
short var_15 = (short)9296;
unsigned long long int var_17 = 15802395394140363626ULL;
int zero = 0;
unsigned long long int var_19 = 8692477548674222052ULL;
int var_20 = 771895023;
_Bool var_21 = (_Bool)0;
int var_22 = 503916032;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
