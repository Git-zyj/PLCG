#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -791187237;
int var_5 = -1490628183;
unsigned long long int var_9 = 4406887540065290923ULL;
int var_14 = -2072341647;
int zero = 0;
signed char var_17 = (signed char)-74;
int var_18 = 691524172;
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
