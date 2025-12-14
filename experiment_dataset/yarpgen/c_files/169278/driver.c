#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1733187330;
int var_2 = 1993121267;
int var_4 = 817198944;
unsigned long long int var_5 = 8265487539475548945ULL;
unsigned long long int var_10 = 10356740157074899672ULL;
int var_11 = 1855472305;
int zero = 0;
int var_12 = -1125149489;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
