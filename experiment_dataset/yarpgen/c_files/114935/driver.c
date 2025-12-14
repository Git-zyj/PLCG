#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4917169755802520510LL;
long long int var_8 = -1429220320134718420LL;
signed char var_14 = (signed char)27;
int zero = 0;
long long int var_18 = -87976031084564944LL;
unsigned int var_19 = 1854438247U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
