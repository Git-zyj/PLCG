#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1694545677151453841ULL;
short var_1 = (short)16832;
signed char var_3 = (signed char)17;
long long int var_5 = -226739300859765169LL;
unsigned char var_9 = (unsigned char)29;
int zero = 0;
unsigned long long int var_12 = 2665333568299649032ULL;
unsigned long long int var_13 = 11856904161562887027ULL;
unsigned long long int var_14 = 7056444839834807989ULL;
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
