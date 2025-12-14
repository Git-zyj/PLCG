#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3010850720U;
unsigned long long int var_6 = 17725730220670555147ULL;
int var_10 = -774249404;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned long long int var_19 = 6483358003873992501ULL;
long long int var_20 = 4948409491336583351LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
