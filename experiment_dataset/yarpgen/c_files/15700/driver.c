#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1000495982708505073LL;
long long int var_2 = -1494111279493380801LL;
long long int var_5 = -8119416697556213299LL;
long long int var_13 = 4252188614955235546LL;
int zero = 0;
long long int var_19 = 5213403580862329684LL;
long long int var_20 = 1319255236501252895LL;
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
