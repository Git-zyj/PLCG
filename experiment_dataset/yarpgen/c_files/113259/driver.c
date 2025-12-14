#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 681396407U;
long long int var_1 = 4031655218438358305LL;
signed char var_4 = (signed char)10;
long long int var_8 = -8601056008868424902LL;
signed char var_9 = (signed char)38;
int zero = 0;
unsigned int var_10 = 2278781488U;
long long int var_11 = 7301956108296110132LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
