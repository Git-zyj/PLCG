#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2466961170955456083ULL;
signed char var_1 = (signed char)1;
int var_9 = -221231893;
unsigned long long int var_10 = 9315698495919925849ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)4840;
signed char var_13 = (signed char)-23;
unsigned int var_14 = 1506185582U;
unsigned long long int var_15 = 10520792183456641542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
