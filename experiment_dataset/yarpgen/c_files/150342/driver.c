#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
unsigned long long int var_9 = 2156161241502112721ULL;
unsigned long long int var_10 = 3198730584161386929ULL;
int zero = 0;
unsigned long long int var_13 = 12948068962812596565ULL;
long long int var_14 = 8990773056389336697LL;
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
