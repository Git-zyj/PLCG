#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18295;
unsigned long long int var_6 = 10917311485795693164ULL;
unsigned long long int var_7 = 14368631959620201000ULL;
int zero = 0;
short var_13 = (short)25898;
unsigned long long int var_14 = 14106229415389353872ULL;
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
