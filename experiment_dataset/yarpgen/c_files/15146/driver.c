#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 16753034940678266220ULL;
unsigned int var_11 = 1267870055U;
long long int var_13 = -5216092006953647151LL;
int zero = 0;
long long int var_16 = 6335135179367706823LL;
int var_17 = 1239279087;
int var_18 = -552204450;
long long int var_19 = 5926259184176247876LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
