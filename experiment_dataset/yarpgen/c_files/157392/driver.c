#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1589971031U;
unsigned long long int var_1 = 857623388264963515ULL;
long long int var_5 = 3123494805236426865LL;
unsigned long long int var_9 = 5805007713113481632ULL;
long long int var_10 = 4854121604436867795LL;
signed char var_11 = (signed char)22;
int zero = 0;
unsigned short var_15 = (unsigned short)28116;
unsigned int var_16 = 3529514308U;
long long int var_17 = 8584660864553841986LL;
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
