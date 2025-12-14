#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2690640932307856197LL;
int var_2 = -2101504771;
int var_5 = 1355909259;
long long int var_14 = -1763501216547605831LL;
signed char var_16 = (signed char)-100;
int zero = 0;
int var_17 = -409764043;
int var_18 = -1290483765;
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
