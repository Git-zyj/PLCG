#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)35;
signed char var_3 = (signed char)-88;
unsigned long long int var_11 = 11806430457462591716ULL;
unsigned char var_12 = (unsigned char)231;
int zero = 0;
signed char var_14 = (signed char)124;
int var_15 = -103309874;
signed char var_16 = (signed char)52;
long long int var_17 = -2276650374091265030LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
