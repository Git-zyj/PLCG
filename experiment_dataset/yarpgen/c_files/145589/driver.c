#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_7 = 10709314258712684684ULL;
short var_11 = (short)17485;
long long int var_12 = 8983799084493115949LL;
long long int var_13 = 1316529019565899720LL;
int zero = 0;
unsigned long long int var_18 = 7130186034148847717ULL;
unsigned long long int var_19 = 5301692027919963283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
