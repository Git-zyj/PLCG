#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3562500566233802542LL;
long long int var_5 = -8279708273907696643LL;
short var_6 = (short)1608;
unsigned int var_9 = 186351181U;
int zero = 0;
int var_10 = 392123872;
short var_11 = (short)-16798;
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
