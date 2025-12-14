#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1775673464U;
long long int var_4 = 7176769632600069874LL;
unsigned int var_5 = 2182543826U;
long long int var_9 = 8942854664939996543LL;
unsigned short var_10 = (unsigned short)21839;
int zero = 0;
signed char var_11 = (signed char)125;
unsigned long long int var_12 = 2605434503154780393ULL;
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
