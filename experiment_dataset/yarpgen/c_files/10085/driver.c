#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1973707405U;
int var_5 = 1068326427;
signed char var_8 = (signed char)-111;
signed char var_9 = (signed char)-75;
unsigned long long int var_11 = 17633296825973639229ULL;
int zero = 0;
long long int var_12 = -7485870590237692821LL;
unsigned int var_13 = 2430398911U;
unsigned int var_14 = 741389187U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
