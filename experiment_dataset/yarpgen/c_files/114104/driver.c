#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21083;
unsigned long long int var_3 = 5241562760513952867ULL;
signed char var_5 = (signed char)125;
_Bool var_8 = (_Bool)0;
int var_10 = 709216960;
int zero = 0;
unsigned int var_12 = 2183139436U;
long long int var_13 = 4224343830646034556LL;
void init() {
}

void checksum() {
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
