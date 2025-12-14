#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)128;
int zero = 0;
unsigned long long int var_20 = 4934606949994856349ULL;
long long int var_21 = -4586962310415697959LL;
unsigned short var_22 = (unsigned short)63978;
long long int var_23 = -7099236197036770707LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
