#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1880800859164725495LL;
long long int var_7 = -4741843169938647782LL;
int var_9 = -420968955;
int zero = 0;
short var_10 = (short)-9530;
unsigned long long int var_11 = 15089253869829260513ULL;
signed char var_12 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
