#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2058587505579929384LL;
long long int var_2 = 3960395997214013703LL;
long long int var_3 = 2089682480501391081LL;
long long int var_4 = 6502664413091696095LL;
long long int var_7 = 1990134853233974003LL;
long long int var_10 = 1767088940486078343LL;
int zero = 0;
unsigned long long int var_11 = 14679905395349332824ULL;
long long int var_12 = -1077735372370126803LL;
long long int var_13 = -1288387546663880347LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
