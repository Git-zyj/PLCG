#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4452038163441204604LL;
int var_1 = -2125571617;
unsigned long long int var_2 = 1265373647242368427ULL;
unsigned char var_4 = (unsigned char)84;
unsigned long long int var_8 = 3172710866265876603ULL;
unsigned long long int var_9 = 17991964467360954386ULL;
int zero = 0;
long long int var_10 = 999940745361768434LL;
unsigned int var_11 = 1381024380U;
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
