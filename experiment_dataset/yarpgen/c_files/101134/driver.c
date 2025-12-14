#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3020710825940187344LL;
short var_1 = (short)-32624;
short var_6 = (short)-24458;
signed char var_9 = (signed char)31;
int zero = 0;
short var_10 = (short)-14415;
unsigned long long int var_11 = 3224066669599224380ULL;
signed char var_12 = (signed char)-120;
unsigned long long int var_13 = 8557713584612077410ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
