#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8257617573719405921LL;
int var_9 = 139124483;
int var_10 = -1515399855;
unsigned int var_12 = 3943716660U;
long long int var_13 = 1072322218102060148LL;
int zero = 0;
unsigned long long int var_14 = 5302321442063508250ULL;
int var_15 = -2037862415;
unsigned int var_16 = 2873511769U;
long long int var_17 = -9218422034036197824LL;
int var_18 = 1651598915;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
