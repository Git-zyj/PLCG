#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
unsigned long long int var_1 = 14528043602436222855ULL;
unsigned char var_2 = (unsigned char)220;
long long int var_4 = 6978948445123523865LL;
long long int var_10 = 1223841975312923775LL;
short var_11 = (short)32529;
int zero = 0;
signed char var_12 = (signed char)20;
short var_13 = (short)-11527;
_Bool var_14 = (_Bool)1;
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
