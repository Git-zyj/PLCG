#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
short var_2 = (short)-2155;
_Bool var_6 = (_Bool)1;
unsigned short var_13 = (unsigned short)38122;
unsigned short var_14 = (unsigned short)49014;
int zero = 0;
signed char var_15 = (signed char)22;
unsigned long long int var_16 = 2926620395920132734ULL;
int var_17 = -655278266;
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
