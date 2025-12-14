#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)159;
int var_2 = -1583732281;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)125;
signed char var_7 = (signed char)116;
short var_11 = (short)2896;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 16941183759862346966ULL;
int var_20 = -732061044;
void init() {
}

void checksum() {
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
