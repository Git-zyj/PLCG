#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1292349735U;
int var_7 = 713674998;
unsigned long long int var_11 = 17711718446436162294ULL;
int zero = 0;
unsigned long long int var_13 = 8133407785492081634ULL;
long long int var_14 = 6876555540538570034LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
