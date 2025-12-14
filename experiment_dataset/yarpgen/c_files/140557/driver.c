#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)8;
long long int var_4 = -7715235624451468297LL;
int var_9 = -353802949;
long long int var_12 = -166387805016377073LL;
int zero = 0;
signed char var_15 = (signed char)78;
long long int var_16 = -2844353633813840504LL;
int var_17 = -2122896424;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
