#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
unsigned int var_1 = 3408910401U;
unsigned int var_8 = 1100550020U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-4;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1757027916U;
unsigned short var_17 = (unsigned short)39970;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
