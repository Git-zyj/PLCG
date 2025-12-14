#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
int var_7 = -1449744467;
unsigned char var_13 = (unsigned char)129;
int zero = 0;
unsigned long long int var_18 = 16537513473291349884ULL;
short var_19 = (short)-7048;
int var_20 = 232704450;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
