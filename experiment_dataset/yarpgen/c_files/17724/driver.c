#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4943367010542359916ULL;
signed char var_7 = (signed char)24;
unsigned long long int var_9 = 5431843487089825655ULL;
long long int var_10 = -2022242476725748957LL;
short var_11 = (short)1771;
int zero = 0;
int var_13 = -1965629454;
signed char var_14 = (signed char)-57;
void init() {
}

void checksum() {
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
