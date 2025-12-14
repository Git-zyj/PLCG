#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7804537851537559603LL;
unsigned char var_4 = (unsigned char)104;
int var_5 = -828043147;
unsigned long long int var_9 = 10407026771269951951ULL;
int zero = 0;
long long int var_15 = 5791036606480306660LL;
unsigned char var_16 = (unsigned char)198;
void init() {
}

void checksum() {
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
