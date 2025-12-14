#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 11720254499620512655ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 974841510;
int var_11 = -1204628480;
int zero = 0;
int var_14 = 635217554;
unsigned long long int var_15 = 3595394629061329344ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
