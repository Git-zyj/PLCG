#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6901691641888708729LL;
unsigned long long int var_7 = 17159196528500649551ULL;
unsigned short var_9 = (unsigned short)43287;
long long int var_11 = 7406836161376259615LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6238548796157209685ULL;
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
