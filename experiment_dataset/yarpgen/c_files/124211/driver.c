#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11012566630931244113ULL;
unsigned int var_4 = 1189284054U;
unsigned long long int var_7 = 6234008816226201716ULL;
int zero = 0;
int var_12 = 46685981;
signed char var_13 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
