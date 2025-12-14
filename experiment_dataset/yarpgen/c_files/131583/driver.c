#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 774429775;
long long int var_1 = 12787595364652220LL;
unsigned int var_6 = 2511282973U;
signed char var_9 = (signed char)27;
int zero = 0;
signed char var_10 = (signed char)66;
signed char var_11 = (signed char)104;
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
