#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_10 = (unsigned short)28944;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)-4462;
int var_14 = 450729948;
unsigned short var_15 = (unsigned short)17017;
signed char var_16 = (signed char)-33;
void init() {
}

void checksum() {
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
