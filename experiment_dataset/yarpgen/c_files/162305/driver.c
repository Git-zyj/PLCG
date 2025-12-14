#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = 4391637455415144362LL;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)166;
int zero = 0;
int var_17 = 723088550;
long long int var_18 = -6661566167350906209LL;
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
