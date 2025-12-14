#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8526793081319134198LL;
unsigned int var_3 = 1219400152U;
unsigned long long int var_4 = 17774628550919545393ULL;
long long int var_9 = 6936076220051935419LL;
int zero = 0;
long long int var_10 = -6514274524346920897LL;
long long int var_11 = 8979436026827386987LL;
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
