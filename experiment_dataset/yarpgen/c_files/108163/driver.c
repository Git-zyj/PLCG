#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
signed char var_4 = (signed char)-58;
int var_6 = -392630485;
int zero = 0;
unsigned int var_13 = 2003593157U;
unsigned long long int var_14 = 10918092709621680730ULL;
short var_15 = (short)5864;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
