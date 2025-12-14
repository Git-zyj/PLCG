#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2531960657U;
unsigned long long int var_4 = 10239558734114317954ULL;
long long int var_5 = 7307077493719995097LL;
unsigned int var_6 = 722232435U;
short var_13 = (short)24118;
int zero = 0;
unsigned int var_15 = 1254601020U;
int var_16 = -1445574010;
long long int var_17 = 7891814008616649085LL;
void init() {
}

void checksum() {
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
