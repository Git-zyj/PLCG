#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 781762368;
unsigned long long int var_2 = 2134361947802277186ULL;
short var_9 = (short)31698;
_Bool var_11 = (_Bool)0;
int var_13 = -1315485095;
int zero = 0;
unsigned int var_14 = 2683913387U;
unsigned long long int var_15 = 3163977680950920067ULL;
unsigned char var_16 = (unsigned char)108;
void init() {
}

void checksum() {
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
