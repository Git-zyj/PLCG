#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_7 = 2478745516U;
unsigned short var_10 = (unsigned short)14388;
unsigned long long int var_11 = 17509226896973699741ULL;
int var_12 = -1368357888;
unsigned long long int var_13 = 12822087963755789901ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)30444;
unsigned long long int var_16 = 7598300581109925718ULL;
unsigned long long int var_17 = 2804335864269643745ULL;
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
