#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_6 = 7215394535465311409ULL;
unsigned long long int var_7 = 13741173036063569729ULL;
unsigned int var_8 = 3413087118U;
int var_9 = -988049085;
int var_11 = -1449269533;
unsigned int var_12 = 1706287687U;
int zero = 0;
unsigned short var_13 = (unsigned short)48977;
long long int var_14 = -7585307576847598233LL;
void init() {
}

void checksum() {
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
