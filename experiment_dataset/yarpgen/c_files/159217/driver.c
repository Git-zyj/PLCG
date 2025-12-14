#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6207809553538738849LL;
unsigned int var_5 = 1737548172U;
long long int var_7 = -2128895457682833124LL;
long long int var_9 = -3279293316814486404LL;
int zero = 0;
unsigned int var_11 = 3864275536U;
long long int var_12 = -8701423895803612367LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
