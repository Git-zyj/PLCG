#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -481350143;
short var_4 = (short)1873;
unsigned long long int var_7 = 15222883260215231487ULL;
short var_8 = (short)-9495;
unsigned int var_10 = 504590027U;
int zero = 0;
unsigned int var_11 = 1869543944U;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
