#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6461019256096778609ULL;
long long int var_1 = 2828587987190840790LL;
int var_3 = 1055815772;
signed char var_4 = (signed char)-16;
short var_14 = (short)18308;
int zero = 0;
unsigned long long int var_16 = 4316466514553576678ULL;
short var_17 = (short)23650;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
