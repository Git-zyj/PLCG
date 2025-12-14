#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4057644241711717286ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)27560;
int zero = 0;
short var_17 = (short)7030;
long long int var_18 = 1910443191117352689LL;
void init() {
}

void checksum() {
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
