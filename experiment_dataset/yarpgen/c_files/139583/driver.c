#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6343131124771307607LL;
unsigned int var_6 = 2026517006U;
long long int var_7 = -4280087991810894617LL;
long long int var_8 = 1929349347314268349LL;
unsigned char var_9 = (unsigned char)95;
int var_12 = -1576375136;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -628171502;
int var_15 = -2144180456;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
