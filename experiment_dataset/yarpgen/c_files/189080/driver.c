#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2436166901U;
unsigned short var_3 = (unsigned short)3776;
unsigned long long int var_5 = 7511547439238580678ULL;
unsigned int var_8 = 3902108241U;
short var_11 = (short)-23339;
unsigned long long int var_12 = 16057882840404772629ULL;
int zero = 0;
long long int var_13 = 8184783429261274853LL;
short var_14 = (short)-10723;
unsigned short var_15 = (unsigned short)33896;
unsigned long long int var_16 = 11359352422801957771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
