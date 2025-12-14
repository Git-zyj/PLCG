#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6648755160337811075LL;
unsigned long long int var_1 = 10546040603578321594ULL;
long long int var_9 = 4542054700420794158LL;
unsigned long long int var_13 = 13766532204911801561ULL;
int zero = 0;
int var_15 = -164936086;
long long int var_16 = 5295304133534942577LL;
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
