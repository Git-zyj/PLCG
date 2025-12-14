#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1160667874;
signed char var_1 = (signed char)39;
unsigned short var_3 = (unsigned short)57608;
unsigned int var_4 = 2960790572U;
int zero = 0;
long long int var_10 = 5815368677048923567LL;
short var_11 = (short)31995;
unsigned short var_12 = (unsigned short)64177;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
