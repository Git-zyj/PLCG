#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 346665878;
long long int var_9 = -7646599236487779825LL;
long long int var_12 = 6700674072035029105LL;
int zero = 0;
int var_15 = 335282950;
int var_16 = 1239547339;
long long int var_17 = -899219685081400268LL;
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
