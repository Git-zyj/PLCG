#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3248311665U;
long long int var_5 = -7783492692944779776LL;
unsigned int var_8 = 3368289114U;
int zero = 0;
short var_15 = (short)-15111;
unsigned long long int var_16 = 17334633074170359094ULL;
unsigned long long int var_17 = 10466635549234679596ULL;
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
