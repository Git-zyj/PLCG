#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)14046;
unsigned long long int var_9 = 7654707401080263670ULL;
signed char var_11 = (signed char)-115;
int zero = 0;
short var_14 = (short)-3738;
short var_15 = (short)7892;
unsigned short var_16 = (unsigned short)7415;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
