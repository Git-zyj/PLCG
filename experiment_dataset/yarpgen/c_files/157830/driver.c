#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2389327066186922090LL;
long long int var_5 = -788718030883816920LL;
long long int var_7 = -2787027554597721578LL;
long long int var_8 = -6348885332397968508LL;
int zero = 0;
long long int var_14 = -9127076930554410474LL;
long long int var_15 = -3947133308827364169LL;
void init() {
}

void checksum() {
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
