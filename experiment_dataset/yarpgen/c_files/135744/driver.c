#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3094213536U;
unsigned long long int var_9 = 1593659919330385080ULL;
unsigned long long int var_14 = 6876141519472370282ULL;
unsigned int var_17 = 1247452773U;
int zero = 0;
int var_20 = -2101057608;
unsigned int var_21 = 4246082039U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
