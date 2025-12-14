#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 525646628U;
int var_3 = 42738319;
unsigned long long int var_9 = 14186135123706877037ULL;
short var_11 = (short)3470;
int zero = 0;
unsigned short var_13 = (unsigned short)33584;
unsigned long long int var_14 = 13762015404320561969ULL;
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
