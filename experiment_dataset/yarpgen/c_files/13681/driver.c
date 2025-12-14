#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42115;
unsigned short var_5 = (unsigned short)41982;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 18091629020805094664ULL;
int var_18 = 1718892770;
void init() {
}

void checksum() {
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
