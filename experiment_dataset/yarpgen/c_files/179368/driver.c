#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)45;
long long int var_11 = -5042954414367190828LL;
signed char var_17 = (signed char)-95;
int zero = 0;
long long int var_18 = 1213696273313102418LL;
unsigned short var_19 = (unsigned short)39446;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
