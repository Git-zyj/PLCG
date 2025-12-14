#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7892481375933624376LL;
unsigned short var_7 = (unsigned short)18972;
unsigned long long int var_9 = 17505025076328428117ULL;
int var_12 = 304826365;
unsigned long long int var_14 = 14682392370770506822ULL;
int zero = 0;
short var_15 = (short)-31600;
long long int var_16 = 8494452340309190850LL;
signed char var_17 = (signed char)-7;
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
