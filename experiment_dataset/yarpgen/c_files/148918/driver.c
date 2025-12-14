#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2379427352617305529ULL;
unsigned short var_9 = (unsigned short)27213;
int var_10 = 1562628776;
int zero = 0;
unsigned long long int var_14 = 3994153328153547693ULL;
unsigned long long int var_15 = 12845553597688805406ULL;
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
