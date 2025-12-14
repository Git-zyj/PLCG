#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
signed char var_5 = (signed char)-33;
int var_7 = -1018511975;
unsigned char var_9 = (unsigned char)157;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 13190622952871930589ULL;
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
