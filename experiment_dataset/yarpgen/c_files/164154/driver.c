#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1296476485;
int var_8 = 604587142;
int var_9 = -2080721817;
int var_10 = 599488687;
int zero = 0;
int var_20 = 1759825736;
int var_21 = 1305052157;
unsigned long long int var_22 = 17862596583468579467ULL;
int var_23 = -1722596945;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
