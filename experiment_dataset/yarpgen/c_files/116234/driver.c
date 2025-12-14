#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59379;
int var_2 = 2100860169;
unsigned long long int var_7 = 11286048542720398301ULL;
long long int var_8 = -8941672274596902753LL;
int var_11 = -1996818321;
long long int var_12 = -2823570422273863242LL;
int zero = 0;
unsigned int var_15 = 3504713073U;
unsigned long long int var_16 = 17089059048885593958ULL;
long long int var_17 = 1126524010956818132LL;
long long int var_18 = -1822304759064778571LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
