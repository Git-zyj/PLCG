#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16970;
short var_4 = (short)16264;
long long int var_10 = -9039673372217482434LL;
signed char var_13 = (signed char)-57;
int var_15 = 379230521;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)11467;
int var_18 = 684431738;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
