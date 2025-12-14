#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21599;
unsigned int var_9 = 2888437506U;
short var_10 = (short)13935;
int zero = 0;
unsigned long long int var_16 = 2462933798327230073ULL;
unsigned int var_17 = 3225373164U;
void init() {
}

void checksum() {
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
