#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1147264050;
long long int var_7 = -5786876932873414361LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 5875635322091547225ULL;
int zero = 0;
unsigned long long int var_15 = 8645285680364281217ULL;
short var_16 = (short)-3550;
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
