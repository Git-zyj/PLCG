#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3534985255U;
unsigned int var_8 = 281560636U;
unsigned long long int var_9 = 14128025695116632291ULL;
int var_10 = -1988463962;
int zero = 0;
short var_18 = (short)-12417;
unsigned long long int var_19 = 16488207102902502007ULL;
long long int var_20 = 6825845306759650167LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
