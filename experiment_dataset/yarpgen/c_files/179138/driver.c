#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 7189211301143195135LL;
_Bool var_10 = (_Bool)0;
signed char var_16 = (signed char)112;
int zero = 0;
long long int var_20 = -1644873053906720367LL;
int var_21 = -105003164;
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
