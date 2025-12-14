#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_7 = -1112847922;
int var_9 = 71281938;
unsigned char var_11 = (unsigned char)225;
int var_12 = 806157363;
int zero = 0;
unsigned long long int var_14 = 17447943007044358149ULL;
unsigned long long int var_15 = 2187700032836623172ULL;
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
