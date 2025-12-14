#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20964;
short var_4 = (short)-24400;
short var_6 = (short)-22993;
long long int var_9 = -1930944266004750724LL;
int zero = 0;
long long int var_13 = -941753543517451967LL;
long long int var_14 = 5143831582696367488LL;
short var_15 = (short)-12664;
void init() {
}

void checksum() {
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
